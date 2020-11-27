#include "porte.h"
#include "ui_porte.h"

Porte::Porte(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Porte)
{
    ui->setupUi(this);
    imagePorte [0] = new QPixmap(":/../images/porte_fermee.png");
    imagePorte [1] = new QPixmap(":/../images/porte_ouverte.png");
}

Porte::~Porte()
{
    delete ui;
    delete [] imagePorte[2];
}

void Porte::deverouiller()
{
    ui->label_Image->setPixmap(*imagePorte[1]);
    ui->label_EtatPorte->setText("La porte est dévérouillée");
}

void Porte::verouiller()
{
    ui->label_Image->setPixmap(*imagePorte[0]);
    ui->label_EtatPorte->setText("La porte est vérouillée");
}
