#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->lcdNumber->setDigitCount(8);         // Number of digits to display
    ui->lcdNumber->setSegmentStyle(QLCDNumber::Filled); // Style: Flat, Outline, or Filled

    timer= new QTimer(this);
    connect(timer, QTimer::timeout,this, MainWindow::myFunc);

    timer->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFunc()
{

    QTime time = QTime::currentTime();
    ui->lcdNumber->display(time.toString("hh:mm:ss"));
}
