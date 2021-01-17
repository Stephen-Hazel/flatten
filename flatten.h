#ifndef FLATTEN_H
#define FLATTEN_H

#include <QApplication>
#include <QMainWindow>
#include "ui_flatten.h"
#include "../stv/ui.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Flatten; }
QT_END_NAMESPACE

class Flatten: public QMainWindow {
   Q_OBJECT
private:
   Ui::Flatten *ui;

public:
   Flatten (QWidget *par = nullptr)
   : QMainWindow (par), ui (new Ui::Flatten)
   {  ui->setupUi (this);  }

  ~Flatten ()  {delete ui;}

   void Open (), Shut ();
   StrArr *_tb;                        // filenames to flatten

public slots:
   void Dir ();
   void Go ();
};

#endif // FLATTEN_H
