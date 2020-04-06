#include "virtualbackgroundwindow.h"
#include "ui_virtualbackgroundwindow.h"

CVirtualBackGroundWindow::CVirtualBackGroundWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CVirtualBackGroundWindow)
{
    ui->setupUi(this);
}

CVirtualBackGroundWindow::~CVirtualBackGroundWindow()
{
    delete ui;
}
