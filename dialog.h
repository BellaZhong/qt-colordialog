#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QtGui>

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

private:
    QPushButton *colorBtn;
    QFrame *colorFrame;
private slots:
    void showColor();

};

#endif // DIALOG_H
