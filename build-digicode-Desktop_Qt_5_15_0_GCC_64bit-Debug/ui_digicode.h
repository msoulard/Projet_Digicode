/********************************************************************************
** Form generated from reading UI file 'digicode.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGICODE_H
#define UI_DIGICODE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Digicode
{
public:
    QPushButton *pushButton_Poussoir;

    void setupUi(QWidget *Digicode)
    {
        if (Digicode->objectName().isEmpty())
            Digicode->setObjectName(QString::fromUtf8("Digicode"));
        Digicode->resize(800, 600);
        QFont font;
        font.setPointSize(36);
        Digicode->setFont(font);
        pushButton_Poussoir = new QPushButton(Digicode);
        pushButton_Poussoir->setObjectName(QString::fromUtf8("pushButton_Poussoir"));
        pushButton_Poussoir->setGeometry(QRect(110, 50, 81, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/bouton_poussoir.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Poussoir->setIcon(icon);
        pushButton_Poussoir->setIconSize(QSize(100, 100));

        retranslateUi(Digicode);

        QMetaObject::connectSlotsByName(Digicode);
    } // setupUi

    void retranslateUi(QWidget *Digicode)
    {
        Digicode->setWindowTitle(QCoreApplication::translate("Digicode", "Digicode", nullptr));
        pushButton_Poussoir->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Digicode: public Ui_Digicode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGICODE_H
