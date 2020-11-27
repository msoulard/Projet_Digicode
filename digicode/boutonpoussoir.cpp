#include "boutonpoussoir.h"
#include "ui_boutonpoussoir.h"

BoutonPoussoir::BoutonPoussoir(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BoutonPoussoir)
{
    ui->setupUi(this);
    connect(ui->pushButton_BoutonPoussoir, &QPushButton::clicked, this, &BoutonPoussoir::on_pushButton_BoutonPoussoir_clicked);
}

BoutonPoussoir::~BoutonPoussoir()
{
    delete ui;
}

void BoutonPoussoir::on_pushButton_BoutonPoussoir_clicked()
{

}
