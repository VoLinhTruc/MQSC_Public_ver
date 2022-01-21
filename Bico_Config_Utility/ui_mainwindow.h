/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *ESP_Wifi_Config_pushButton;
    QPushButton *MQSC_Config_pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(626, 452);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ESP_Wifi_Config_pushButton = new QPushButton(centralWidget);
        ESP_Wifi_Config_pushButton->setObjectName(QString::fromUtf8("ESP_Wifi_Config_pushButton"));
        ESP_Wifi_Config_pushButton->setGeometry(QRect(160, 70, 301, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(20);
        ESP_Wifi_Config_pushButton->setFont(font);
        MQSC_Config_pushButton = new QPushButton(centralWidget);
        MQSC_Config_pushButton->setObjectName(QString::fromUtf8("MQSC_Config_pushButton"));
        MQSC_Config_pushButton->setGeometry(QRect(160, 260, 301, 61));
        MQSC_Config_pushButton->setFont(font);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 626, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Configuration Utility", nullptr));
        ESP_Wifi_Config_pushButton->setText(QCoreApplication::translate("MainWindow", "WiFi Configuration", nullptr));
        MQSC_Config_pushButton->setText(QCoreApplication::translate("MainWindow", "MQSC Configuration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
