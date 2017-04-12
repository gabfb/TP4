#ifndef AJOUTERENTRAINEUR_H
#define AJOUTERENTRAINEUR_H

#include <QtGui/QDialog>
#include "ui_ajouterentraineur.h"

class AjouterEntraineur : public QDialog
{
    Q_OBJECT

public:
    AjouterEntraineur(QWidget *parent = 0);
    ~AjouterEntraineur();

private:
    Ui::AjouterEntraineurClass ui;
};

#endif // AJOUTERENTRAINEUR_H
