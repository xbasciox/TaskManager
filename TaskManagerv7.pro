QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    classes/allclasses.cpp \
    classes/command.cpp \
    classes/commandtask.cpp \
    classes/task.cpp \
    classes/taskobjprinter.cpp \
    classes/taskobjsearcher.cpp \
    classes/tasktimed.cpp \
    classes/tasktimedperiodic.cpp \
    classes/trigger.cpp \
    classes/triggertask.cpp \
    classes/triggertasktimed.cpp \
    classes/triggertasktimedperiodic.cpp \
    classfactory.cpp \
    main.cpp \
    mainwindow.cpp \
    objectbase.cpp \
    objectfactory.cpp \
    objectfactoryinterface.cpp \
    taskcontroller.cpp \
    taskmanager.cpp

HEADERS += \
    classes/allclasses.h \
    classes/command.h \
    classes/commandtask.h \
    classes/task.h \
    classes/taskobjprinter.h \
    classes/taskobjsearcher.h \
    classes/tasktimed.h \
    classes/tasktimedperiodic.h \
    classes/trigger.h \
    classes/triggertask.h \
    classes/triggertasktimed.h \
    classes/triggertasktimedperiodic.h \
    classfactory.h \
    mainwindow.h \
    objectbase.h \
    objectfactory.h \
    objectfactoryinterface.h \
    taskcontroller.h \
    taskmanager.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
