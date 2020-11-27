#ifndef DIGICODE_H
#define DIGICODE_H

#include <QWidget>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QTimer>
#include "porte.h"
#include "boutonpoussoir.h"

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
    void onTimerTempoGache_timeout();
    void onTimerTempoVerrouillage_timeout();
    void onBoutonPoussoirActionne();
private:
    Ui::Digicode *ui;
    QGridLayout *grille;
    QLineEdit *afficheur;
    QString code;
    QString codeSecret;
    QPushButton *touches[4][3];
    Porte *laPorte;
    QTimer tempoGache;
    QTimer tempoVerouillage;
    BoutonPoussoir *leBoutonPoussoir;
    int compteur;
};
#endif // DIGICODE_H
