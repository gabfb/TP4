#ifndef AJOUTERENTRAINEUR_H
#define AJOUTERENTRAINEUR_H

#include <QtGui/QDialog>
#include "ui_ajouterentraineur.h"
#include "Date.h"

class AjouterEntraineur : public QDialog
{
    Q_OBJECT

public:
    AjouterEntraineur(QWidget *parent = 0);
    ~AjouterEntraineur();

    QString reqNom();
    QString reqPrenom();
    util::Date reqDate();
    QString reqNum();
    QString reqRAMQ();
    QString reqSexe();

private slots:
	void validerFormulaire();

private:
    Ui::AjouterEntraineurClass ui;
};

#endif // AJOUTERENTRAINEUR_H
