#include "digicode.h"
#include "ui_digicode.h"

Digicode::Digicode() :
    ui(new Ui::Digicode)
{
    ui->setupUi(this);
    codeSecret = "1234";
    int colonne=0, ligne=0;
    grille = new QGridLayout(this);
    afficheur = new QLineEdit(this);
    laPorte = new Porte;
    leBoutonPoussoir = new BoutonPoussoir;
    laPorte->show();
    laPorte->move(20, 20);
    leBoutonPoussoir->show();
    leBoutonPoussoir->move(100, 100);
    grille->setEnabled(true);
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    afficheur->setEchoMode(QLineEdit::Password);
    afficheur->setMinimumHeight(80);
    grille->addWidget(afficheur,ligne,colonne,1,3);
    // le temporisateur de gache
    tempoGache.setSingleShot(true);
    //association du tempoGache à son signal et son slot
    connect(&tempoGache, &QTimer::timeout, this, &Digicode::onTimerTempoGache_timeout);
    //association du tempoVerouillage à son signal et son slot
    connect(&tempoVerouillage, &QTimer::timeout, this, & Digicode::onTimerTempoVerrouillage_timeout);
    //association du boutonPoussoir avec son signal et son slot
    connect(leBoutonPoussoir, &BoutonPoussoir::actions, this, &Digicode::onBoutonPoussoirActionne);
    // Création du clavier
    QString TableDesSymboles[4][3] = {{"7","8","9"},{"4","5","6"},{"1","2","3"},{"On","0","Ok"}};
    //création des 12 touches
    ligne = 4;
    colonne = 3;
    for(int c = 0 ; c < colonne ; c++){
        for (int l = 0 ; l < ligne ; l++) {
            touches[l][c] = new QPushButton;
            touches[l][c]->setText(TableDesSymboles[l][c]);
            touches[l][c]->setMaximumWidth(80);
            touches[l][c]->setMinimumHeight(80);
            touches[l][c]->setStyleSheet("background_color = grey");;
            grille->addWidget(touches[l][c], l+1, c);
            connect(touches[l][c], &QPushButton::clicked, this, &Digicode::onQPushButtonClicked);
        }
    }
    //la porte est vérouillée
    laPorte->verouiller();
    this->setLayout(grille);
}

Digicode::~Digicode()
{
    delete ui;
    delete grille;
    delete afficheur;
    delete laPorte;
    delete [] touches[4][3];
}

void Digicode::onQPushButtonClicked()
{
    int compteur = 0;
    //récupération de la valeur du bouton
    QPushButton *bouton = static_cast<QPushButton *>(sender());
    QString val = bouton->text();
    //si la valeur est numérique
    if(val != "On" && val != "Ok"){
        code = code + val;
        afficheur->setText(code);
    }
    //si demande de vérification du code
    if(val == "Ok"){
        if(code == codeSecret){
            laPorte->deverouiller();
            tempoGache.start(3000);
//            QMessageBox messageMarche;
//            messageMarche.setText("La porte est dévérouillée");
//            messageMarche.exec();
        }
        else{
            QMessageBox messageMarche;
            messageMarche.setText("Code Faux");
            messageMarche.exec();
            code.clear();
            compteur++;
            //si 3 tentative erronées ont été faites
            if(compteur == 3){
                tempoVerouillage.start(6000);
                laPorte->verouiller();
                grille->setEnabled(false);
            }
        }
    }
    //si demande de correction du code
    if(val == "On"){
        code.clear();
    }
}

void Digicode::onTimerTempoGache_timeout()
{
    tempoGache.stop();
    laPorte->verouiller();

//    QMessageBox messageMarche;
//    messageMarche.setText("La porte est vérouillée");
//    messageMarche.exec();
}

void Digicode::onTimerTempoVerrouillage_timeout()
{
    tempoVerouillage.stop();
    grille->setEnabled(true);
}

void Digicode::onBoutonPoussoirActionne()
{
    laPorte->deverouiller();
}

