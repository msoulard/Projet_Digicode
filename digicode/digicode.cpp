#include "digicode.h"
#include "ui_digicode.h"

Digicode::Digicode() :
    ui(new Ui::Digicode)
{
    ui->setupUi(this);
    int colonne=0, ligne=0;
    grille = new QGridLayout(this);
    afficheur = new QLineEdit(this);
    afficheur->setReadOnly(true);
    afficheur->setAlignment(Qt::AlignRight);
    afficheur->setEchoMode(QLineEdit::Password);
    afficheur->setMinimumHeight(80);
    grille->addWidget(afficheur,ligne,colonne,1,3);
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
    this->setLayout(grille);
}

Digicode::~Digicode()
{
    delete ui;
    delete grille;
    delete afficheur;
}

void Digicode::onQPushButtonClicked()
{
    QString val;
    val = (QPushButton* (*)[3])(&((Digicode*)this)->Digicode::touches)->text();
    if(val == '0' || val == '1' || val == '2' || val == '3' || val == '4' || val == '5' || val == '6' || val == '7' || val == '8' || val == '9'){
        code = code + val;
    }
    if(val == "Ok"){
        if(code == codeSecret){
            QMessageBox messageMarche;
            messageMarche.setText("La porte est dévérouillée");
            messageMarche.exec();
        }
        else{
            QMessageBox messageMarche;
            messageMarche.setText("Code Faux");
            messageMarche.exec();
        }
    }
}

