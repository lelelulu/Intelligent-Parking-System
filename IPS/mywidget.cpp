#pragma once
#include "mywidget.h"
#include "ui_mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent)
{
    setMinimumSize(1000,700);
    //setMaximumSize(1000,700);
    setGeometry(100,100,700,700);
    //窗口在整个计算机界面上的位置


       flag_in = false;
       flag_out = false;



       //所有按钮的配置
       b1=new QPushButton("quit",this);
       b1->setGeometry(880,550,80,30);
       //按钮在窗口的左上角右边像素,下面像素，且窗口宽，高
       b1->setFont(QFont("Times",16,QFont::Bold));
       //字体（还有courier），字体大小18像素，文本加粗（ Weight：Light,Bold），是否为斜体

       a1=new QPushButton("OUT_A1",this);
       a1->setGeometry(880,60,80,30);
       a1->setFont(QFont("Times",16,QFont::Bold));

       a2=new QPushButton("OUT_A2",this);
       a2->setGeometry(880,100,80,30);
       a2->setFont(QFont("Times",16,QFont::Bold));

       a3=new QPushButton("OUT_A3",this);
       a3->setGeometry(880,140,80,30);
       a3->setFont(QFont("Times",16,QFont::Bold));

       in1=new QPushButton("in_1",this);
       in1->setGeometry(30,90,80,30);
       in1->setFont(QFont("Times",16,QFont::Bold));

       in2=new QPushButton("in_2",this);
       in2->setGeometry(30,130,80,30);
       in2->setFont(QFont("Times",16,QFont::Bold));

       in3=new QPushButton("in_3",this);
       in3->setGeometry(30,170,80,30);
       in3->setFont(QFont("Times",16,QFont::Bold));

       //公园，家，超市
       park=new QPushButton("PARK",this);
       park->setGeometry(460,110,260,80);
       park->setFont(QFont("PARK",16,QFont::Bold));

       home=new QPushButton("HOME",this);
       home->setGeometry(460,195,140,160);
       home->setFont(QFont("HOME",16,QFont::Bold));

       cinema=new QPushButton("CINEMA",this);
       cinema->setGeometry(460,360,260,150);
       cinema->setFont(QFont("CINEMA",16,QFont::Bold));

       market=new QPushButton("MARKET",this);
       market->setGeometry(610,220,120,120);
       market->setFont(QFont("MARKET",16,QFont::Bold));





      // lcd显示屏的配置

      clock=new QLCDNumber(this);
      clock->setGeometry(10,30,120,30);
      clock->setSegmentStyle(QLCDNumber::Filled);
      clock->setDigitCount(8);

      lruntime1=new QLCDNumber(this);
      lruntime1->setGeometry(50,540,80,30);
      lruntime1->setSegmentStyle(QLCDNumber::Filled);

      lruntime2=new QLCDNumber(this);
      lruntime2->setGeometry(50,580,80,30);
      lruntime2->setSegmentStyle(QLCDNumber::Filled);


      lruntime3=new QLCDNumber(this);
      lruntime3->setGeometry(50,620,80,30);
      lruntime3->setSegmentStyle(QLCDNumber::Filled);

      lcarid1=new QLCDNumber(this);
      lcarid1->setGeometry(50,350,80,30);
      lcarid1->setSegmentStyle(QLCDNumber::Filled);


      lintime=new QLCDNumber(this);
      lintime->setGeometry(30,400,100,30);
      lintime->setSegmentStyle(QLCDNumber::Filled);
      lintime->setDigitCount(8);


      lremainedmoney=new QLCDNumber(this);
      lremainedmoney->setGeometry(50,460,80,30);
      lremainedmoney->setSegmentStyle(QLCDNumber::Filled);



      lcarid2=new QLCDNumber(this);
      lcarid2->setGeometry(900,320,80,30);
      lcarid2->setSegmentStyle(QLCDNumber::Filled);

      louttime=new QLCDNumber(this);
      louttime->setGeometry(880,370,100,30);
      louttime->setSegmentStyle(QLCDNumber::Filled);
      louttime->setDigitCount(8);


      lremovedmoney=new QLCDNumber(this);
      lremovedmoney->setGeometry(900,430,80,30);
      lremovedmoney->setSegmentStyle(QLCDNumber::Filled);

      lremainedmoney2=new QLCDNumber(this);
      lremainedmoney2->setGeometry(900,490,80,30);
      lremainedmoney2->setSegmentStyle(QLCDNumber::Filled);




      //所有标签的配置
       sysclock= new QLabel(this);
       sysclock->setGeometry(10,2,75,40);
       sysclock->setText("SYSTEM_TIME:");

       runtime1= new QLabel(this);
       runtime1->setGeometry(20,540,80,30);
       runtime1->setText("car1:");

       runtime2= new QLabel(this);
       runtime2->setGeometry(20,580,80,30);
       runtime2->setText("car2:");

       runtime3= new QLabel(this);
       runtime3->setGeometry(20,620,80,30);
       runtime3->setText("car3:");


       label = new QLabel(this);
       //调用QLabel构造函数
       label->setGeometry(12,520,80,30);
       label->setText("RUN_TIME:");
       label->setAlignment(Qt::AlignCenter);

       car1= new QLabel(this);
       car1->setGeometry(515,30,80,40);
       car1->setText("CAR1");

       car2= new QLabel(this);
       car2->setGeometry(595,30,80,40);
       car2->setText("CAR2");

       car3= new QLabel(this);
       car3->setGeometry(675,30,80,40);
       car3->setText("CAR3");

       carid1= new QLabel(this);
       carid1->setGeometry(30,300,110,80);
       carid1->setText("IN_carID:");



       intime= new QLabel(this);
       intime->setGeometry(30,350,110,80);
       intime->setText("IN_TIME:");

       remainedmoney= new QLabel(this);
       remainedmoney->setGeometry(30,410,110,80);
       remainedmoney->setText("REMAINED\nMONEY:");



       carid2= new QLabel(this);
       carid2->setGeometry(880,270,110,80);
       carid2->setText("OUT_carID:");


       outtime= new QLabel(this);
       outtime->setGeometry(880,320,110,80);
       outtime->setText("OUT_TIME:");


       removedmoney = new QLabel(this);
       removedmoney->setGeometry(880,380,110,80);
       removedmoney->setText("REMOVED\nMONEY:");

       remainedmoney2= new QLabel(this);
       remainedmoney2->setGeometry(880,440,110,80);
       remainedmoney2->setText("REMAINED\nMONEY:");

       la1 = new QLabel(this);
       la1->setGeometry(240,130,110,80);
       la1->setText("A1");
       la2 = new QLabel(this);
       la2->setGeometry(240,240,110,80);
       la2->setText("A2");
       la3 = new QLabel(this);
       la3->setGeometry(240,350,110,80);
       la3->setText("A3");



      //信号和槽的联系

      connect(timer,SIGNAL(timeout()),this,SLOT(XYtimerUpDate()));//关联定时器计满信号和相应的槽函数，用于系统时间的显示
      timer->start(1000);//定时器开始计时，其中1000表示1000ms即1秒

      connect(b1,SIGNAL(clicked()),qApp,SLOT(quit()));//退出按钮
       //信号（足够了），槽（标准函数），当你点击鼠标时（即某个事件发生时），将发射clicked信号（emit来实现），此时槽中函数就会被执行
       //可以将多个槽连接到同一个信号
       //Qapp是内置指针，总指向QApllication对象a




      //car1
      connect(in1,SIGNAL(clicked()),this,SLOT(carmovetoa1()));//按下按钮，小车移动到a1

      connect(a1,SIGNAL(clicked()),this,SLOT(outa1()));//按下按钮，小车从a1离开

      connect(timer1,SIGNAL(timeout()),this,SLOT(displaytime()));
      //小车进闸机时，发送timer1开始计时的信号，小车出闸机时，发送timer1停止计时的信号
      timer1->setInterval(1000);

      //car2

      connect(in2,SIGNAL(clicked()),this,SLOT(carmovetoa2()));
      connect(a2,SIGNAL(clicked()),this,SLOT(outa2()));
      connect(timer2,SIGNAL(timeout()),this,SLOT(displaytime2()));
      timer2->setInterval(1000);

      //car3

      connect(in3,SIGNAL(clicked()),this,SLOT(carmovetoa3()));
      connect(a3,SIGNAL(clicked()),this,SLOT(outa3()));
      connect(timer3,SIGNAL(timeout()),this,SLOT(displaytime3()));
      timer3->setInterval(1000);



      }

//下为槽
void MyWidget::carmovetoa1()
{
     int i=0;
     flag_in=true;//闸机抬起
     this->repaint();//重画函数，将抬起图画载入，刷新画面
     displayup();//入口显示屏显示小车相关信息
     timer1->start();//开始计时小车的运行时间
     delay(1000);//小车等抬杆的延时时间
    for( i=car1->x();i>430;i--)//小车车身过闸机
       {
             car1->setGeometry(i,car1->y(),car1->width(),car1->height());
           delay(3);
       }
     delay(300);
     flag_in=false;//关闭闸机

     this->repaint();//重画函数，将闸机关闭图画载入，刷新画面



    for(i=car1->x();i>155;i--)//车继续移动
       {
           car1->setGeometry(i,car1->y(),car1->width(),car1->height());
         delay(3);
       }


     car1->setGeometry(car1->x(),car1->y(),car1->height(),car1->width());


    for(i=car1->y();i<160;i++)//向下移动
       {
           car1->setGeometry(car1->x(),i,car1->width(),car1->height());

           delay(3);
       }


     car1->setGeometry(car1->x(),car1->y(),car1->height(),car1->width());


    for(i=car1->x();i<300;i++)//向右移动
       {
           car1->setGeometry(i,car1->y(),car1->width(),car1->height());

           delay(6);
       }
}

Car c1(1,100);

void MyWidget::displaytime()
{
    count++;//定时器计满一次则加一
    lruntime1->display(count);//显示在对应小车的运行时间记录屏上
}

void MyWidget::outa1()
{
    //outa1

    int i=0;
    for(i=car1->x();i>155;i--)//小车出停车位,向出口闸机走去
       {
           car1->setGeometry(i,car1->y(),car1->width(),car1->height());
          delay(6);
       }

    car1->setGeometry(car1->x(),car1->y(),car1->height(),car1->width());
    for(i=car1->y();i<540;i++)//
       {
           car1->setGeometry(car1->x(),i,car1->width(),car1->height());
          delay(3);
       }
     car1->setGeometry(car1->x(),car1->y(),car1->height(),car1->width());
   for(i=car1->x();i<430;i++)//车头到闸机
       {
          car1->setGeometry(i,car1->y(),car1->width(),car1->height());
          delay(3);
      }
   timer1->stop();//计时器停止计时
   delay(300);
   flag_out=true;//闸机杆抬起
   this->repaint();
   displaydown();//显示小车信息
   back();//小车从出口闸机开始向外走，最终回到入口


}


//下为函数
void MyWidget::back() //a1出停车场
{
    int i=0;
    delay(1000);

    for(i=car1->x();i<510;i++)
        {
           car1->setGeometry(i,car1->y(),car1->width(),car1->height());
           paint->drawPixmap(i,car1->y(),car1->width(),car1->height(),pix);
           delay(3);
       }
     delay(300);
    flag_out=false;
    this->repaint();
    for(i=car1->x();i<800;i++)
        {
           car1->setGeometry(i,car1->y(),car1->width(),car1->height());
           paint->drawPixmap(i,car1->y(),car1->width(),car1->height(),pix);
           delay(1);
       }

     car1->setGeometry(car1->x(),car1->y(),car1->height(),car1->width());
    for(i=car1->y();i>30;i--)
       {
           car1->setGeometry(car1->x(),i,car1->width(),car1->height());
           paint->drawPixmap(car1->x(),i,car1->width(),car1->height(),pix);
           delay(1);
       }
     car1->setGeometry(car1->x(),car1->y(),car1->height(),car1->width());
    for(i=car1->x();i>510;i--)
        {
           car1->setGeometry(i,car1->y(),car1->width(),car1->height());
           paint->drawPixmap(i,car1->y(),car1->width(),car1->height(),pix);
           delay(1);
       }

}

void MyWidget::displayup()
{
    //Car c1(1,100);
    QTime time1 = QTime::currentTime();//获取系统现在的时间
    QString strTime1 = time1.toString("hh:mm:ss");//设置系统时间显示格式
    lintime->display(strTime1);//在lcd上显示进入时间
    lremainedmoney->display(c1.Get_Symoney());//c1车的剩余钱数
    lcarid1->display(c1.Get_CarId());//小车的id号

}

void MyWidget::displaydown()
{

    QTime time1 = QTime::currentTime();//获取系统现在的时间
    QString strTime1 = time1.toString("hh:mm:ss");//设置系统时间显示格式
    louttime->display(strTime1);//在lcdNumber上显示进入时间
    lremovedmoney->display(count*0.5);//校车扣除钱数
    c1.removemoney(count);//将小车剩余钱数根据停车时间减少
    lremainedmoney2->display(c1.Get_Symoney());//c1车的剩余钱数
    lcarid2->display(c1.Get_CarId());//id号
    count=0;//小车出闸机，将运行时间置为0
    lruntime1->display(count);
}











void MyWidget::carmovetoa2()
{
//   if( movea1==false )
//  {
     int i=0;
    for( i=car2->x();i>510;i--)//1
        {
            car2->setGeometry(i,car2->y(),car2->width(),car2->height());
            delay(3);
        }


     flag_in=true;
     this->repaint();
     displayup2();
     timer2->start();
     delay(1000);
    for( i=car2->x();i>430;i--)//1
       {
           car2->setGeometry(i,car2->y(),car2->width(),car2->height());
           delay(3);
       }
     delay(300);
     flag_in=false;

     this->repaint();



    for(i=car2->x();i>155;i--)//1
       {
           car2->setGeometry(i,car2->y(),car2->width(),car2->height());
         delay(3);
       }


     car2->setGeometry(car2->x(),car2->y(),car2->height(),car2->width());


    for(i=car2->y();i<260;i++)//2
       {
           car2->setGeometry(car2->x(),i,car2->width(),car2->height());

           delay(3);
       }


     car2->setGeometry(car2->x(),car2->y(),car2->height(),car2->width());


    for(i=car2->x();i<300;i++)//3
       {
           car2->setGeometry(i,car2->y(),car2->width(),car2->height());

           delay(6);
       }
//     }
//    movea1=true;

}

Car c2(2,200);
void MyWidget::displayup2()
{

    QTime time2 = QTime::currentTime();//获取系统现在的时间
    QString strTime2 = time2.toString("hh:mm:ss");//设置系统时间显示格式
    lintime->display(strTime2);//在lcdNumber上显示进入时间
    lremainedmoney->display(c2.Get_Symoney());
    lcarid1->display(c2.Get_CarId());

}

void MyWidget::displaydown2()
{

    QTime time2 = QTime::currentTime();//获取系统现在的时间
    QString strTime2 = time2.toString("hh:mm:ss");//设置系统时间显示格式
    louttime->display(strTime2);//在lcdNumber上显示进入时间
    lremovedmoney->display(count2*0.5);
    lcarid2->display(c2.Get_CarId());
    c2.removemoney(count2);
    lremainedmoney2->display(c2.Get_Symoney());
    count2=0;
    lruntime2->display(count2);
}


void MyWidget::displaytime2()
{
    count2++;
    lruntime2->display(count2);
}

void MyWidget::outa2()
{
    //outa1

    int i=0;
    for(i=car2->x();i>155;i--)//4
       {
           car2->setGeometry(i,car2->y(),car2->width(),car2->height());
           delay(6);
       }

    car2->setGeometry(car2->x(),car2->y(),car2->height(),car2->width());
    for(i=car2->y();i<540;i++)//5
       {
           car2->setGeometry(car2->x(),i,car2->width(),car2->height());
           delay(3);
       }
     car2->setGeometry(car2->x(),car2->y(),car2->height(),car2->width());
   for(i=car2->x();i<430;i++)//6
       {
          car2->setGeometry(i,car2->y(),car2->width(),car2->height());
          delay(3);
      }
//   emit(stopcount(count));
   timer2->stop();
   delay(300);
   flag_out=true;
   this->repaint();
   displaydown2();
   back2();


}

void MyWidget::back2() //a2出停车场
{
    int i=0;
    delay(1000);

    for(i=car2->x();i<510;i++)
        {
           car2->setGeometry(i,car2->y(),car2->width(),car2->height());
           delay(3);
       }
     delay(300);
    flag_out=false;
    this->repaint();
    for(i=car2->x();i<800;i++)
        {
           car2->setGeometry(i,car2->y(),car2->width(),car2->height());
           delay(1);
       }

     car2->setGeometry(car2->x(),car2->y(),car2->height(),car2->width());
    for(i=car2->y();i>30;i--)
       {
           car2->setGeometry(car2->x(),i,car2->width(),car2->height());
           delay(1);
       }
    car2->setGeometry(car2->x(),car2->y(),car2->height(),car2->width());
    for(i=car2->x();i>592;i--)
        {
           car2->setGeometry(i,car2->y(),car2->width(),car2->height());
           delay(1);
       }

}








void MyWidget::carmovetoa3()
{

    int i=0;
    for( i=car3->x();i>510;i--)
        {
            car3->setGeometry(i,car3->y(),car3->width(),car3->height());
            delay(3);
        }

     flag_in=true;
     this->repaint();
     displayup3();
     timer3->start();
     delay(300);
    for( i=car3->x();i>430;i--)//1
       {
           car3->setGeometry(i,car3->y(),car3->width(),car3->height());
           delay(3);
       }
     delay(1000);
     flag_in=false;

     this->repaint();



    for(i=car3->x();i>155;i--)//1
       {
           car3->setGeometry(i,car3->y(),car3->width(),car3->height());
         delay(3);
       }


     car3->setGeometry(car3->x(),car3->y(),car3->height(),car3->width());


    for(i=car3->y();i<360;i++)//2
       {
           car3->setGeometry(car3->x(),i,car3->width(),car3->height());

           delay(3);
       }


      car3->setGeometry(car3->x(),car3->y(),car3->height(),car3->width());


    for(i=car3->x();i<300;i++)//3
       {
            car3->setGeometry(i,car3->y(),car3->width(),car3->height());

           delay(6);
       }


}

Car c3(3,300);
void MyWidget::displayup3()
{

    QTime time3 = QTime::currentTime();//获取系统现在的时间
    QString strTime3 = time3.toString("hh:mm:ss");//设置系统时间显示格式
    lintime->display(strTime3);//在lcdNumber上显示进入时间
    lremainedmoney->display(c3.Get_Symoney());
    lcarid1->display(c3.Get_CarId());

}

void MyWidget::displaydown3()
{

    QTime time3 = QTime::currentTime();//获取系统现在的时间
    QString strTime3 = time3.toString("hh:mm:ss");//设置系统时间显示格式
    louttime->display(strTime3);//在lcdNumber上显示进入时间
    lremovedmoney->display(count3*0.5);
    lcarid2->display(c3.Get_CarId());
    c3.removemoney(count3);
    lremainedmoney2->display(c3.Get_Symoney());
    count3=0;
    lruntime3->display(count3);
}


void MyWidget::displaytime3()
{
    count3++;
    lruntime3->display(count3);
}

void MyWidget::outa3()
{
    //outa1

    int i=0;
    for(i=car3->x();i>155;i--)//4
       {
           car3->setGeometry(i,car3->y(),car3->width(),car3->height());
           delay(6);
       }

     car3->setGeometry(car3->x(),car3->y(),car3->height(),car3->width());
    for(i=car3->y();i<540;i++)//5
       {
            car3->setGeometry(car3->x(),i,car3->width(),car3->height());
            delay(3);
       }
     car3->setGeometry(car3->x(),car3->y(),car3->height(),car3->width());
   for(i=car3->x();i<430;i++)//6
       {
           car3->setGeometry(i,car3->y(),car3->width(),car3->height());

          delay(3);
      }
//   emit(stopcount(count));
   timer3->stop();
   delay(300);
   flag_out=true;
   this->repaint();
   displaydown3();
   back3();


}

void MyWidget::back3() //a3出停车场
{
    int i=0;
    delay(1000);

    for(i=car3->x();i<510;i++)
        {
           car3->setGeometry(i,car3->y(),car3->width(),car3->height());
            delay(3);
       }
     delay(300);
    flag_out=false;
    this->repaint();
    for(i=car3->x();i<800;i++)
        {
           car3->setGeometry(i,car3->y(),car3->width(),car3->height());
           delay(1);
       }

      car3->setGeometry(car3->x(),car3->y(),car3->height(),car3->width());
    for(i=car3->y();i>30;i--)
       {
            car3->setGeometry(car3->x(),i,car3->width(),car3->height());
            delay(1);
       }
     car3->setGeometry(car3->x(),car3->y(),car3->height(),car3->width());
    for(i=car3->x();i>670;i--)
        {
            car3->setGeometry(i,car3->y(),car3->width(),car3->height());
            delay(1);
       }

}









void MyWidget::delay(int time)
{
    QTime t;
    t.start();
    while(t.elapsed()<time)
        QCoreApplication::processEvents();
    /*
    QTime newTime = QTime::currentTime().addMSecs(time);
    while(QTime::currentTime()<newTime)
    {
       QCoreApplication::processEvents(QEventLoop::AllEvents,100);
    }
    */
}

void MyWidget::paintEvent(QPaintEvent*)//画图
{
   //paint =new QPainter;
   paint->begin(this);

   paint->setPen( QPen(Qt::red,3,Qt::SolidLine));//右卡矩形
   paint->drawRect(875,270,105,260);
   paint->setPen( QPen(Qt::red,3,Qt::SolidLine));//左卡矩形
   paint->drawRect(25,300,105,220);


   paint->setPen( QPen(Qt::blue,3,Qt::SolidLine));//大行驶道
   paint->drawRect(150,20,720,600);
   paint->setPen( QPen(Qt::blue,4,Qt::DashLine));//小行驶道
   paint->drawRect(235,100,545,420);

   paint->setPen( QPen(Qt::blue,4,Qt::SolidLine));//闸机上
   paint->drawRect(505,15,10,10);
   paint->setPen( QPen(Qt::blue,4,Qt::SolidLine));//闸机下
   paint->drawRect(505,615,10,10);


   if(flag_in){//若flag_in为true则抬杆
        paint->setPen( QPen(Qt::white,6,Qt::SolidLine));//上闸机抬杆
        paint->drawLine(510,22,510,98);

    }else{
        paint->setPen( QPen(Qt::blue,5,Qt::SolidLine));//关杆
        paint->drawLine(510,20,510,100);
    }


    if(flag_out){
        paint->setPen( QPen(Qt::white,6,Qt::SolidLine));//下闸机抬杆
        paint->drawLine(510,522,510,618);
    }else{
        paint->setPen( QPen(Qt::blue,5,Qt::SolidLine));//闭杆
        paint->drawLine(510,520,510,620);

    }





   pix.load(":/new/cars/car.png");
   paint->drawPixmap(car1->x(),car1->y(),car1->width(),car1->height(),pix);//载入三张图片

   pix2.load(":/new/cars/car1.png");
   paint->drawPixmap(car2->x(),car2->y(),car2->width(),car2->height(),pix2);

   pix3.load(":/new/cars/car2.png");
   paint->drawPixmap(car3->x(),car3->y(),car3->width(),car3->height(),pix3);

   paint->setPen( QPen(Qt::blue,4,Qt::DashLine));//a1停车位的绘制
   paint->drawRect(235,150,170,70);
   paint->setPen( QPen(Qt::blue,4,Qt::DashLine));//a2
   paint->drawRect(235,250,170,70);
   paint->setPen( QPen(Qt::blue,4,Qt::DashLine));//a3
   paint->drawRect(235,350,170,70);

   paint->setPen( QPen(Qt::blue,3,Qt::DashLine));// out选项的矩形
   paint->drawRect(875,35,100,190);

   paint->setPen( QPen(Qt::blue,3,Qt::DashLine));// in
   paint->drawRect(25,72,100,190);



  paint->end();
}

void MyWidget::XYtimerUpDate()
   {
     QTime time = QTime::currentTime();//获取系统现在的时间
      QString strTime = time.toString("hh:mm:ss");//设置系统时间显示格式

//      qDebug()<<strTime;
      clock->display(strTime);//在lcd上显示系统时间

  }

MyWidget::~MyWidget()
{
    delete ui;
}
