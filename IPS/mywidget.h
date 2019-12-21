#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <stdlib.h>
#include <QApplication.h>
#include <qpushbutton.h>
#include <qfont.h>
#include <qlabel.h>
#include <QLCDNumber.h>
#include <QSlider.h>
#include <QLineEdit.h>
#include <qpainter.h>
#include <qbrush.h>
#include <QPixmap>
#include <QRegion>
#include <QtCore>
#include <QKeyEvent>
#include <QDebug>
#include <QPoint>
#include <QCoreApplication>
#include <QEventLoop>
#include <QSize>
#include <QThread>
namespace Ui {
class MyWidget;
class Car;
}

/*******************/
#ifndef MYCAR_H
#define MYCAR_H
class Car
{
private:
    int carID;    //小车id号
    float symoney;  //剩余money

 public:

    Car(int _carID,float _symoney)
        :carID(_carID)
        ,symoney(_symoney)
    {}

    float Get_Symoney()
    {
        return symoney;
    }
    int Get_CarId()
    {
        return carID;
    }

    void removemoney(float cou)
    {
         symoney= symoney-0.5*(cou);  //剩余的钱-0.5元每秒*小车在停车场内运行时间

    }
    ~Car()
    {}

};

#endif // MYCAR_H


/*********************/



class MyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();
    QPainter*paint =new QPainter(this);
    QTimer*timer=new QTimer(this);//系统的时钟
    QTimer*timer1=new QTimer(this);//用于car1的定时器
    QPixmap pix;//car1
    int count=0;//car1的运行时间计时

    QTimer*timer2=new QTimer(this);//用于car2的定时器
    QPixmap pix2;
    int count2=0;

    QTimer*timer3=new QTimer(this);//用于car3的定时器
    QPixmap pix3;
    int count3=0;

    void back(); //车出停车场
    void back2();
    void back3();


    void displayup();//car1入口屏幕表示
    void displaydown();//出口屏幕表示
    void displayup2();//car2入口屏幕表示
    void displaydown2();//出口屏幕表示
    void displayup3();//car3入口屏幕表示
    void displaydown3();//出口屏幕表示


public slots ://将后面所有函数都看作是槽
         void carmovetoa1();//车移动到a1
         void outa1();//车出a1
         void displaytime();//小车记录运行时间函数


         void carmovetoa2();
         void outa2();
         void displaytime2();


         void carmovetoa3();
         void outa3();
         void displaytime3();


         void XYtimerUpDate();//系统时钟

signals:


private:
    Ui::MyWidget *ui;
    QPushButton *b1,*in1,*in2,*in3,*a2,*a3,*park,*home,*cinema,*market,*a1;//各种按钮

    QLabel*label,*carid1,*carid2,*intime,*outtime,*remainedmoney,*removedmoney,*la1,*la2,*la3,*car1,*car2,*car3,*sysclock,*runtime1,*runtime2,*runtime3,*remainedmoney2;
    //各种标签

    QLCDNumber*lcarid1,*lcarid2,*lintime,*louttime,*clock,*lruntime1,*lruntime2,*lruntime3,*lremainedmoney,*lremovedmoney,*lremainedmoney2;
    //各种显示屏


    bool flag_in;//为闸机提供的标志，入口时是否抬起
    bool flag_out;//出口时是否抬起



protected:
        void paintEvent(QPaintEvent*);
        void delay(int time);//小车运行延时



};

#endif // MYWIDGET_H
