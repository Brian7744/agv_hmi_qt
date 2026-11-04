#include "agvhmi.h"
#include "ui_agvhmi.h"

agvHMI::agvHMI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::agvHMI)
{
    ui->setupUi(this);
}

agvHMI::~agvHMI()
{
    delete ui;
}
