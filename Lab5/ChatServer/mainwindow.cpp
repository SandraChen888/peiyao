#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_starStopButton_clicked()
{
    static bool started = false;
    started = !started;

    if (started)
    {
        ui->starStopButton->setText("停止服务器");
        logMessage("服务器已经启动！");
    } else
    {
        ui->starStopButton->setText("启动服务器");
        logMessage("服务器已经停止！");
    }

}

void MainWindow::logMessage(const QString &msg)
{
    ui->logEditor->appendPlainText(msg);
}
