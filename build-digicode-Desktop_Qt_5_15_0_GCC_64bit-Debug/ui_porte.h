/********************************************************************************
** Form generated from reading UI file 'porte.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTE_H
#define UI_PORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Porte
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_Image;
    QLabel *label_EtatPorte;

    void setupUi(QWidget *Porte)
    {
        if (Porte->objectName().isEmpty())
            Porte->setObjectName(QString::fromUtf8("Porte"));
        Porte->resize(400, 300);
        layoutWidget = new QWidget(Porte);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 251, 251));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_Image = new QLabel(layoutWidget);
        label_Image->setObjectName(QString::fromUtf8("label_Image"));
        label_Image->setPixmap(QPixmap(QString::fromUtf8(":/images/porte_fermee.png")));

        verticalLayout->addWidget(label_Image);

        label_EtatPorte = new QLabel(layoutWidget);
        label_EtatPorte->setObjectName(QString::fromUtf8("label_EtatPorte"));

        verticalLayout->addWidget(label_EtatPorte);


        retranslateUi(Porte);

        QMetaObject::connectSlotsByName(Porte);
    } // setupUi

    void retranslateUi(QWidget *Porte)
    {
        Porte->setWindowTitle(QCoreApplication::translate("Porte", "Porte", nullptr));
        label_Image->setText(QString());
        label_EtatPorte->setText(QCoreApplication::translate("Porte", "Porte est verrouill\303\251e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Porte: public Ui_Porte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTE_H
