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
    QPushButton *pushButton_BoutonPoussoir;

    void setupUi(QWidget *BoutonPoussoir)
    {
        if (BoutonPoussoir->objectName().isEmpty())
            BoutonPoussoir->setObjectName(QString::fromUtf8("BoutonPoussoir"));
        BoutonPoussoir->resize(119, 101);
        BoutonPoussoir->setMaximumSize(QSize(16777214, 16777215));
        pushButton_BoutonPoussoir = new QPushButton(BoutonPoussoir);
        pushButton_BoutonPoussoir->setObjectName(QString::fromUtf8("pushButton_BoutonPoussoir"));
        pushButton_BoutonPoussoir->setGeometry(QRect(10, 10, 101, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/bouton_poussoir.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_BoutonPoussoir->setIcon(icon);
        pushButton_BoutonPoussoir->setIconSize(QSize(100, 100));

        retranslateUi(BoutonPoussoir);

        QMetaObject::connectSlotsByName(BoutonPoussoir);
    } // setupUi

    void retranslateUi(QWidget *BoutonPoussoir)
    {
        BoutonPoussoir->setWindowTitle(QCoreApplication::translate("BoutonPoussoir", "Bouton poussoir", nullptr));
        pushButton_BoutonPoussoir->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BoutonPoussoir: public Ui_BoutonPoussoir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTONPOUSSOIR_H
