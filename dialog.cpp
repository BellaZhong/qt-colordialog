#include "dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    colorBtn=new QPushButton;
    colorBtn->setText(tr("color dialog"));
    colorFrame=new QFrame;
    colorFrame->setFrameShape(QFrame::Box);
    colorFrame->setAutoFillBackground(true);

    QGridLayout *mainLayout=new QGridLayout(this);
    mainLayout->addWidget(colorBtn,1,0);
    mainLayout->addWidget(colorFrame,1,1);

    connect(colorBtn,SIGNAL(clicked()),this,SLOT(showColor()));


}


void Dialog::showColor()
{
    QColor c=QColorDialog::getColor(Qt::blue);
    if(c.isValid())
    {
        colorFrame->setPalette(QPalette(c));
    }
}

Dialog::~Dialog()
{

}
