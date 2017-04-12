#ifndef TP4GUI_H
#define TP4GUI_H

#include <QtGui/QMainWindow>
#include "ui_tp4gui.h"
#include "Annuaire.h"

class TP4Gui : public QMainWindow
{
    Q_OBJECT

public:
    TP4Gui(QWidget *parent = 0);
    ~TP4Gui();

private slots:
    void SupprimerPersonnefct();
    void AjouterPersonnefct();
    void AjouterJoueurfct();
    void AjouterEntraineurfct();



private:
    Ui::TP4GuiClass ui;
    tp::Annuaire m_annuaire;
};

#endif // TP4GUI_H
