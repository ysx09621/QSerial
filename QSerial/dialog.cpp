#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    mSerialPort.setPortName("COM2");
    mSerialPort.setBaudRate(QSerialPort::Baud115200);
    mSerialPort.setParity(QSerialPort::NoParity);
    mSerialPort.setDataBits(QSerialPort::Data8);
    mSerialPort.setStopBits(QSerialPort::OneStop);
    mSerialPort.open(QIODevice::ReadWrite);
    if(mSerialPort.isOpen())
    {
       qDebug()<<"串口打开成功！";
       mSerialPort.write("hello world!");
    }else {
       qDebug()<<"串口打开失败！";
    }
}

Dialog::~Dialog()
{
    delete ui;
}
