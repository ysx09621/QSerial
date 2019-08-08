#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QSerialPort>
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QSerialPort mSerialPort;
};

#endif // DIALOG_H
