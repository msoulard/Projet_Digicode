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
    QPushButton *pushButton;

    void setupUi(QWidget *BoutonPoussoir)
    {
        if (BoutonPoussoir->objectName().isEmpty())
            BoutonPoussoir->setObjectName(QString::fromUtf8("BoutonPoussoir"));
        BoutonPoussoir->resize(400, 300);
        pushButton = new QPushButton(BoutonPoussoir);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(50, 90, 101, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/bouton_poussoir.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(100, 100));

        retranslateUi(BoutonPoussoir);

        QMetaObject::connectSlotsByName(BoutonPoussoir);
    } // setupUi

    void retranslateUi(QWidget *BoutonPoussoir)
    {
        BoutonPoussoir->setWindowTitle(QCoreApplication::translate("BoutonPoussoir", "Form", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BoutonPoussoir: public Ui_BoutonPoussoir {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOUTONPOUSSOIR_H
