#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>

#include "taskmanager.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = nullptr);

    TaskManager *taskManager;
    QSystemTrayIcon *trayIcon;
};

#endif // MAINWINDOW_H
