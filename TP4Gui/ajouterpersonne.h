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
    QString reqType() const;
private slots:
    void validerFormulaire();
    void ajouterJoueurfct();
    void ajouterEntraineurfct();
private:
    Ui::AjouterPersonneClass ui;
    QString m_type;
};

#endif // AJOUTERPERSONNE_H
