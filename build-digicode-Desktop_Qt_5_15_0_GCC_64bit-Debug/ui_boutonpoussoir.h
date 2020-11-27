/********************************************************************************
** Form generated from reading UI file 'boutonpoussoir.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOUTONPOUSSOIR_H
#define UI_BOUTONPOUSSOIR_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BoutonPoussoir
{
public:
    QPushButton *pushButton_Poussoir;

    void setupUi(QWidget *BoutonPoussoir)
    {
        if (BoutonPoussoir->objectName().isEmpty())
            BoutonPoussoir->setObjectName(QString::fromUtf8("BoutonPoussoir"));
        BoutonPoussoir->resize(400, 300);
        pushButton_Poussoir = new QPushButton(BoutonPoussoir);
        pushButton_Poussoir->setObjectName(QString::fromUtf8("pushButton_Poussoir"));
        pushButton_Poussoir->setGeometry(QRect(100, 80, 101, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/bouton_poussoir.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Poussoir->setIcon(icon);
        pushButton_Poussoir->setIconSize(QSize(100, 100));

        retranslateUi(BoutonPoussoir);

        QMetaObject::connectSlotsByName(BoutonPoussoir);
    } // setupUi

    void retranslateUi(QWidget *BoutonPoussoir)
    {
        BoutonPoussoir->setWindowTitle(QCoreApplication::translate("BoutonPoussoir", "Form", nullptr));
        pushButton_Poussoir->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BoutonPoussoir: public Ui_BoutonPoussoir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTONPOUSSOIR_H
