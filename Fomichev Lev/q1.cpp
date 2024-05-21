#include "q1.h"
#include "ui_q1.h"
#include <iostream>
#include <QDebug>
#include <QMessageBox>
#include <math.h>
using namespace std;
q1::q1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::q1)

{

    ui->setupUi(this);
}

q1::~q1()
{
    delete ui;

}






void q1::on_q1_B_2_clicked(){
QString text[41];
     text[1] = ui->x1->text();
     text[2]= ui->x2->text();
     text[3]= ui->x3->text();
     text[4]= ui->x4->text();
     text[5]= ui->x5->text();
     text[6]= ui->x6->text();
     text[7]= ui->x7->text();
     text[8]= ui->x8->text();
     text[9]= ui->x9->text();
     text[10] = ui->x10->text();
     text[11] = ui->x11->text();
     text[12] = ui->x12->text();
     text[13] = ui->x13->text();
     text[14] = ui->x14->text();
     text[15] = ui->x15->text();
     text[16] = ui->x16->text();
     text[17] = ui->x17->text();
     text[18] = ui->x18->text();
     text[19] = ui->x19->text();
     text[20] = ui->x20->text();
     text[21] = ui->x21->text();
     text[22] = ui->x22->text();
     text[23] = ui->x23->text();
     text[24] = ui->x24->text();
     text[25] = ui->x25->text();
     text[26] = ui->x26->text();
     text[27] = ui->x27->text();
     text[28] = ui->x28->text();
     text[29] = ui->x29->text();
     text[30] = ui->x30->text();
     text[31] = ui->x31->text();
     text[32] = ui->x32->text();
     text[33] = ui->x33->text();
     text[34] = ui->x34->text();
     text[35] = ui->x35->text();
     text[36] = ui->x36->text();
     text[37] = ui->x37->text();
     text[38] = ui->x38->text();
     text[39] = ui->x39->text();
     text[40] = ui->x40->text();
    int rus_counter=0;
    int alg_counter=0;
    int geo_counter=0;
    int ang_counter=0;
    int inf_counter=0;
    int rus_grades=0;
    int alg_grades=0;
    int geo_grades=0;
    int ang_grades=0;
    int inf_grades=0;
    bool flag = false;
    QString Text = "";
    QString Text1 = "1";
    QString Text2 = "2";
    QString Text3 = "3";
    QString Text4 = "4";
    QString Text5= "5";

    for (int i = 1; i<=40; i++){
        if ((text[i] == Text || text[i] == Text1 || text[i] == Text2 || text[i] == Text3 || text[i] == Text4 || text[i] == Text5)){
            if(i<=8 && i >=1){
               if (text[i] == Text && rus_counter >= 3 ){
                   continue;}
               else if(text[i] == Text && rus_counter < 3 ){
                   if (flag == false){QMessageBox::warning(this,"Ошибка","По каждому предмету должно быть выставленно не меньше 3 оценок");
                   } flag = true;}
               else{
                   int grade = text[i].toInt();
                   rus_grades +=grade;
                   rus_counter +=1;
    }
            }
            if(i<=16 && i >=9){
               if (text[i] == Text && alg_counter >= 3 ){
                   continue;}
               else if(text[i] == Text && alg_counter < 3 ){
                   if (flag == false){QMessageBox::warning(this,"Ошибка","По каждому предмету должно быть выставленно не меньше 3 оценок");
                   } flag = true;}
               else{
                   int grade = text[i].toInt();
                   alg_grades +=grade;
                   alg_counter +=1;
    }
            }

            if(i<=24 && i >=17){
               if (text[i] == Text && geo_counter >= 3 ){
                   continue;}
               else if(text[i] == Text && geo_counter < 3 ){
                   if (flag == false){QMessageBox::warning(this,"Ошибка","По каждому предмету должно быть выставленно не меньше 3 оценок");
                   } flag = true;}
               else{
                   int grade = text[i].toInt();
                   geo_grades +=grade;
                   geo_counter +=1;
    }
            }


            if(i<=32 && i >=25){
               if (text[i] == Text && ang_counter >= 3 ){
                   continue;}
               else if(text[i] == Text && ang_counter < 3 ){
                   if (flag == false){QMessageBox::warning(this,"Ошибка","По каждому предмету должно быть выставленно не меньше 3 оценок");
                   } flag = true;}
               else{
                   int grade = text[i].toInt();
                   ang_grades +=grade;
                   ang_counter +=1;
    }
            }
            if(i<=40 && i >=33){
               if (text[i] == Text && inf_counter >= 3 ){
                   continue;}
               else if(text[i] == Text && inf_counter < 3 ){
                   if (flag == false){QMessageBox::warning(this,"Ошибка","По каждому предмету должно быть выставленно не меньше 3 оценок");
                   } flag = true;}
               else{
                   int grade = text[i].toInt();
                   inf_grades +=grade;
                   inf_counter +=1;
    }
            }
    }else{
    if (flag == false){QMessageBox::warning(this,"Ошибка","При выставлении оценок была допущена ошибка");
    } flag = true;

        }
    }



if (flag != true){
    float res = (rus_grades * 1.0) / (1.0 * rus_counter);
    double ress = round ( res  *100)/100;
    QString res_T= QString::number(ress);
    ui->Rus_1_F->setText(res_T);

    float res1= (1.0 * alg_grades) / (1.0*alg_counter);
    ress = round ( res1  *100)/100;
    QString res_T1= QString::number(ress);
    ui->Alg_1_F->setText(res_T1);

    float res2= (1.0 * geo_grades )/ geo_counter;
    ress = round ( res2  *100)/100;
    QString res_T2= QString::number(ress);
    ui->Geo_1_F->setText(res_T2);

    float res3= (1.0* ang_grades) / ang_counter;
    ress = round ( res3  *100)/100;
    QString res_T3= QString::number(ress);
    ui->Ang_1_F->setText(res_T3);

    float res4= (1.0* inf_grades )/ inf_counter;
    ress = round ( res4  *100)/100;
    QString res_T4= QString::number(ress);
    ui->Inf_1_F->setText(res_T4);

    int res5= round(res);
    QString res_T5= QString::number(res5);
    ui->Rus_1_F_2->setText(res_T5);
    int res6= round(res1);
    QString res_T6= QString::number(res6);
    ui->Alg_1_F_2->setText(res_T6);
    int res7= round(res2);
    QString res_T7= QString::number(res7);
    ui->Geo_1_F_2->setText(res_T7);
    int res8= round(res3);
    QString res_T8= QString::number(res8);
    ui->Ang_1_F_2->setText(res_T8);
    int res9= round(res4);
    QString res_T9= QString::number(res9);
    ui->Inf_1_F_2->setText(res_T9);
    }
}






