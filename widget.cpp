#include "widget.h"
#include "ui_widget.h"

#include "classes/allclasses.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    init();

}

Widget::~Widget()
{
    delete ui;
}

