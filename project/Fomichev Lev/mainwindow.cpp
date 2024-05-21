#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include "q1.h"
#include <iostream>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




//проверка логина и пароля
void MainWindow::on_pushButton_clicked()
{
    bool flag = false;
    bool flag1 = false;
    QString x = ui->login->text();
    QString y = ui->pass->text();
    string login = x.toStdString();
    string password = y.toStdString();
    int logsize=login.size();
    int passsize = password.size();

        for (int i = 0 ; i<9;i++){
            string i1 = to_string(i);
            if (login[0] == i1[0]){
                flag= true;
                QMessageBox::warning(this,"Ошибка","Логин не должен начинаться с цифры");
        }

    }


    if ( logsize < 3 && flag==false){
        flag=true;
    QMessageBox::warning(this,"Ошибка","Логин должен содержать минимум 3 символа ");
            }
    if ( passsize < 3 && flag==false){
        flag=true;
    QMessageBox::warning(this,"Ошибка","Пароль должен содержать минимум 3 символа ");
            }
    if (flag == false){
    for (int i = 0;i<passsize;i++){
        for (int j = 0 ; j<9;j++){
            string j1 = to_string(j);
            if (password[i] == j1[0]){
                flag1= true;

        }

    }
    }
    }
    if (flag1 != true && flag==false){
    QMessageBox::warning(this,"Ошибка","Пароль должен содержать минимум 1 цифру ");
    }
    if(flag1 == true && flag==false) {




        hide();
        q1 window;
        window.setModal(true);
        window.exec();
}}
