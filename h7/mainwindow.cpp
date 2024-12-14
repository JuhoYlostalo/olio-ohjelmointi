#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->btnCount, SIGNAL(QPushButton::clicked), this, SLOT(on_btnCount_clicked));
    QObject::connect(ui->btnReset, SIGNAL(QPushButton::clicked), this, SLOT(on_btnReset_clicked));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCount_clicked()
{
    counter ++;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu " +s +" kertaa");
}


void MainWindow::on_btnReset_clicked()
{
    counter = 0;
    QString s = QString::number(counter);
    ui->txtResult->setText(s);
    ui->labelInfo->setText("Painiketta painettu " +s +" kertaa");
}

