//      bobina.h
//
//      Copyright 2011 mdchaparror <mdchaparror@mdchaparror1>
//
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//
#ifndef BOBINA_H
#define BOBINA_H

#include <QMainWindow>

namespace Ui {
    class bobina;
}

class bobina : public QMainWindow
{
    Q_OBJECT

public:
    explicit bobina(QWidget *parent = 0);
    ~bobina();

private:
    Ui::bobina *ui;

private slots:
    void on_calcular_2_clicked();
    void on_calcular_clicked();
};

#endif // BOBINA_H
