#ifndef AJOUTERPERSONNE_H
#define AJOUTERPERSONNE_H

#include <QtGui/QDialog>
#include "ui_ajouterpersonne.h"

class AjouterPersonne : public QDialog
{
    Q_OBJECT

public:
    AjouterPersonne(QWidget *parent = 0);
    ~AjouterPersonne();

private:
    Ui::AjouterPersonneClass ui;
};

#endif // AJOUTERPERSONNE_H