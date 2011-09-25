//      bobina.cpp
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
#include "bobina.h"
#include "ui_bobina.h"
#include <math.h>
bobina::bobina(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::bobina)
{
    ui->setupUi(this);
}

bobina::~bobina()
{
    delete ui;
}

void bobina::on_calcular_clicked()
{
    float l = ui->L->value();
    float b= ui->largo->value();
    float d = ui->diametro->value();
    float n=0.0 ;
    float l_cobre=0.0;
    n=sqrt(25.4*l*((18*d)+(40*b)))/d;
    l_cobre=n*2*3.14159265*(d/2)/1000;
    ui->N_espiras->setValue(n);
    ui->Longitud_cobre->setValue(l_cobre);

}

void bobina::on_calcular_2_clicked()
{
    float l = 0.0;
    float b= ui->largo->value();
    float d = ui->diametro->value();
    float n=ui->N_espiras->value() ;
    float l_cobre=0.0;
    l=(pow(d,2.0)*pow(n,2.00))/(25.4*(18*d+40*b));
    l_cobre=n*2*3.14159265*(d/2)/1000;
    ui->L->setValue(l);
	ui->Longitud_cobre->setValue(l_cobre);
}
