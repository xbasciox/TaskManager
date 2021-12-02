#include "mainwindow.h"

#include <QStyle>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->setMinimumSize(800,600);
    this->setWindowTitle("Task Manager");

    taskManager = new TaskManager(this);

    trayIcon = new QSystemTrayIcon(parent);
    trayIcon->setContextMenu(taskManager->deployMenu());
    trayIcon->setIcon(this->style()->standardIcon(QStyle::SP_ComputerIcon));
    trayIcon->setToolTip("Task Manager");
    trayIcon->show();
}
