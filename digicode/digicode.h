#ifndef DIGICODE_H
#define DIGICODE_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class Digicode; }
QT_END_NAMESPACE

class Digicode : public QWidget
{
    Q_OBJECT

public:
    Digicode();
    ~Digicode();
private slots:
    void onQPushButtonClicked();
private:
    Ui::Digicode *ui;
    QGridLayout *grille;
    QLineEdit *afficheur;
    QString code;
    QString codeSecret;
    QPushButton *touches[4][3];
};
#endif // DIGICODE_H
