/********************************************************************************
** Form generated from reading UI file 'esp_wifi_config_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESP_WIFI_CONFIG_WINDOW_H
#define UI_ESP_WIFI_CONFIG_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ESP_Wifi_Config_Window
{
public:
    QWidget *centralwidget;
    QGroupBox *wifi_station_setting_groupBox;
    QLabel *file_path_lable;
    QGroupBox *basic_setting_groupBox;
    QLineEdit *gateway_lineEdit;
    QLineEdit *subnet_lineEdit;
    QLineEdit *static_ip_lineEdit;
    QLabel *static_ip_label;
    QLabel *gateway_label;
    QPushButton *gateway_pushButton;
    QPushButton *subnet_pushButton;
    QPushButton *static_ip_pushButton;
    QLabel *subnet_label;
    QCheckBox *dhcp_enable_checkBox;
    QLineEdit *ssid_lineEdit;
    QLineEdit *password_lineEdit;
    QPushButton *password_pushButton;
    QPushButton *ssid_pushButton;
    QLabel *ssid_lable;
    QLabel *password_label;
    QPushButton *dhcp_enable_pushButton;
    QLabel *connection_timeout_label;
    QLineEdit *connection_timeout_lineEdit;
    QPushButton *connection_timeout_pushButton;
    QPushButton *submit_all_pushButton;
    QLineEdit *file_path_lineEdit;
    QPushButton *file_load_pushButton;
    QPushButton *file_save_pushButton;
    QPlainTextEdit *configuration_data_plainTextEdit;
    QPushButton *basic_setting_to_text;
    QPushButton *text_to_basic_setting;
    QGroupBox *groupBox;
    QPushButton *get_properties_pushButton;
    QPushButton *wifi_connect_pushButton;
    QPushButton *wifi_disconnect_pushButton;
    QPushButton *device_reboot_pushButton;
    QPushButton *configuration_data_clear_all_pushButton;
    QGroupBox *com_port_groupBox;
    QComboBox *port_list_comboBox;
    QComboBox *baudrate_comboBox;
    QLabel *port_label;
    QLabel *baudrate_label;
    QPushButton *connect_pushButton;
    QPushButton *close_pushButton;
    QLabel *connect_state_label;
    QPlainTextEdit *data_from_com_port_plainTextEdit;
    QPushButton *data_from_com_port_clear_all_pushButton;
    QCheckBox *data_from_comport_auto_scroll_checkBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ESP_Wifi_Config_Window)
    {
        if (ESP_Wifi_Config_Window->objectName().isEmpty())
            ESP_Wifi_Config_Window->setObjectName(QString::fromUtf8("ESP_Wifi_Config_Window"));
        ESP_Wifi_Config_Window->resize(976, 449);
        centralwidget = new QWidget(ESP_Wifi_Config_Window);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        wifi_station_setting_groupBox = new QGroupBox(centralwidget);
        wifi_station_setting_groupBox->setObjectName(QString::fromUtf8("wifi_station_setting_groupBox"));
        wifi_station_setting_groupBox->setGeometry(QRect(10, 10, 571, 401));
        file_path_lable = new QLabel(wifi_station_setting_groupBox);
        file_path_lable->setObjectName(QString::fromUtf8("file_path_lable"));
        file_path_lable->setGeometry(QRect(310, 40, 47, 13));
        basic_setting_groupBox = new QGroupBox(wifi_station_setting_groupBox);
        basic_setting_groupBox->setObjectName(QString::fromUtf8("basic_setting_groupBox"));
        basic_setting_groupBox->setGeometry(QRect(10, 30, 251, 291));
        gateway_lineEdit = new QLineEdit(basic_setting_groupBox);
        gateway_lineEdit->setObjectName(QString::fromUtf8("gateway_lineEdit"));
        gateway_lineEdit->setGeometry(QRect(60, 180, 113, 20));
        subnet_lineEdit = new QLineEdit(basic_setting_groupBox);
        subnet_lineEdit->setObjectName(QString::fromUtf8("subnet_lineEdit"));
        subnet_lineEdit->setGeometry(QRect(60, 220, 113, 20));
        static_ip_lineEdit = new QLineEdit(basic_setting_groupBox);
        static_ip_lineEdit->setObjectName(QString::fromUtf8("static_ip_lineEdit"));
        static_ip_lineEdit->setEnabled(true);
        static_ip_lineEdit->setGeometry(QRect(60, 140, 113, 20));
        static_ip_label = new QLabel(basic_setting_groupBox);
        static_ip_label->setObjectName(QString::fromUtf8("static_ip_label"));
        static_ip_label->setGeometry(QRect(10, 140, 47, 13));
        gateway_label = new QLabel(basic_setting_groupBox);
        gateway_label->setObjectName(QString::fromUtf8("gateway_label"));
        gateway_label->setGeometry(QRect(10, 180, 47, 13));
        gateway_pushButton = new QPushButton(basic_setting_groupBox);
        gateway_pushButton->setObjectName(QString::fromUtf8("gateway_pushButton"));
        gateway_pushButton->setGeometry(QRect(180, 180, 51, 23));
        subnet_pushButton = new QPushButton(basic_setting_groupBox);
        subnet_pushButton->setObjectName(QString::fromUtf8("subnet_pushButton"));
        subnet_pushButton->setGeometry(QRect(180, 220, 51, 23));
        static_ip_pushButton = new QPushButton(basic_setting_groupBox);
        static_ip_pushButton->setObjectName(QString::fromUtf8("static_ip_pushButton"));
        static_ip_pushButton->setGeometry(QRect(180, 140, 51, 23));
        subnet_label = new QLabel(basic_setting_groupBox);
        subnet_label->setObjectName(QString::fromUtf8("subnet_label"));
        subnet_label->setGeometry(QRect(10, 220, 47, 13));
        dhcp_enable_checkBox = new QCheckBox(basic_setting_groupBox);
        dhcp_enable_checkBox->setObjectName(QString::fromUtf8("dhcp_enable_checkBox"));
        dhcp_enable_checkBox->setGeometry(QRect(10, 100, 91, 17));
        ssid_lineEdit = new QLineEdit(basic_setting_groupBox);
        ssid_lineEdit->setObjectName(QString::fromUtf8("ssid_lineEdit"));
        ssid_lineEdit->setGeometry(QRect(60, 20, 113, 20));
        password_lineEdit = new QLineEdit(basic_setting_groupBox);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(60, 60, 113, 20));
        password_pushButton = new QPushButton(basic_setting_groupBox);
        password_pushButton->setObjectName(QString::fromUtf8("password_pushButton"));
        password_pushButton->setGeometry(QRect(180, 60, 51, 23));
        ssid_pushButton = new QPushButton(basic_setting_groupBox);
        ssid_pushButton->setObjectName(QString::fromUtf8("ssid_pushButton"));
        ssid_pushButton->setGeometry(QRect(180, 20, 51, 23));
        ssid_lable = new QLabel(basic_setting_groupBox);
        ssid_lable->setObjectName(QString::fromUtf8("ssid_lable"));
        ssid_lable->setGeometry(QRect(10, 20, 47, 13));
        password_label = new QLabel(basic_setting_groupBox);
        password_label->setObjectName(QString::fromUtf8("password_label"));
        password_label->setGeometry(QRect(10, 60, 47, 13));
        dhcp_enable_pushButton = new QPushButton(basic_setting_groupBox);
        dhcp_enable_pushButton->setObjectName(QString::fromUtf8("dhcp_enable_pushButton"));
        dhcp_enable_pushButton->setGeometry(QRect(180, 100, 51, 23));
        connection_timeout_label = new QLabel(basic_setting_groupBox);
        connection_timeout_label->setObjectName(QString::fromUtf8("connection_timeout_label"));
        connection_timeout_label->setGeometry(QRect(10, 260, 47, 13));
        connection_timeout_lineEdit = new QLineEdit(basic_setting_groupBox);
        connection_timeout_lineEdit->setObjectName(QString::fromUtf8("connection_timeout_lineEdit"));
        connection_timeout_lineEdit->setGeometry(QRect(60, 260, 113, 20));
        connection_timeout_pushButton = new QPushButton(basic_setting_groupBox);
        connection_timeout_pushButton->setObjectName(QString::fromUtf8("connection_timeout_pushButton"));
        connection_timeout_pushButton->setGeometry(QRect(180, 260, 51, 23));
        submit_all_pushButton = new QPushButton(wifi_station_setting_groupBox);
        submit_all_pushButton->setObjectName(QString::fromUtf8("submit_all_pushButton"));
        submit_all_pushButton->setGeometry(QRect(310, 290, 151, 31));
        file_path_lineEdit = new QLineEdit(wifi_station_setting_groupBox);
        file_path_lineEdit->setObjectName(QString::fromUtf8("file_path_lineEdit"));
        file_path_lineEdit->setGeometry(QRect(360, 40, 191, 20));
        file_load_pushButton = new QPushButton(wifi_station_setting_groupBox);
        file_load_pushButton->setObjectName(QString::fromUtf8("file_load_pushButton"));
        file_load_pushButton->setGeometry(QRect(360, 70, 71, 23));
        file_save_pushButton = new QPushButton(wifi_station_setting_groupBox);
        file_save_pushButton->setObjectName(QString::fromUtf8("file_save_pushButton"));
        file_save_pushButton->setGeometry(QRect(480, 70, 71, 23));
        configuration_data_plainTextEdit = new QPlainTextEdit(wifi_station_setting_groupBox);
        configuration_data_plainTextEdit->setObjectName(QString::fromUtf8("configuration_data_plainTextEdit"));
        configuration_data_plainTextEdit->setGeometry(QRect(310, 130, 251, 151));
        basic_setting_to_text = new QPushButton(wifi_station_setting_groupBox);
        basic_setting_to_text->setObjectName(QString::fromUtf8("basic_setting_to_text"));
        basic_setting_to_text->setGeometry(QRect(270, 180, 31, 23));
        text_to_basic_setting = new QPushButton(wifi_station_setting_groupBox);
        text_to_basic_setting->setObjectName(QString::fromUtf8("text_to_basic_setting"));
        text_to_basic_setting->setGeometry(QRect(270, 210, 31, 23));
        groupBox = new QGroupBox(wifi_station_setting_groupBox);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 330, 561, 61));
        get_properties_pushButton = new QPushButton(groupBox);
        get_properties_pushButton->setObjectName(QString::fromUtf8("get_properties_pushButton"));
        get_properties_pushButton->setGeometry(QRect(20, 20, 91, 31));
        wifi_connect_pushButton = new QPushButton(groupBox);
        wifi_connect_pushButton->setObjectName(QString::fromUtf8("wifi_connect_pushButton"));
        wifi_connect_pushButton->setGeometry(QRect(240, 20, 91, 31));
        wifi_disconnect_pushButton = new QPushButton(groupBox);
        wifi_disconnect_pushButton->setObjectName(QString::fromUtf8("wifi_disconnect_pushButton"));
        wifi_disconnect_pushButton->setGeometry(QRect(450, 20, 91, 31));
        device_reboot_pushButton = new QPushButton(wifi_station_setting_groupBox);
        device_reboot_pushButton->setObjectName(QString::fromUtf8("device_reboot_pushButton"));
        device_reboot_pushButton->setGeometry(QRect(480, 290, 81, 31));
        configuration_data_clear_all_pushButton = new QPushButton(wifi_station_setting_groupBox);
        configuration_data_clear_all_pushButton->setObjectName(QString::fromUtf8("configuration_data_clear_all_pushButton"));
        configuration_data_clear_all_pushButton->setGeometry(QRect(490, 100, 61, 21));
        com_port_groupBox = new QGroupBox(centralwidget);
        com_port_groupBox->setObjectName(QString::fromUtf8("com_port_groupBox"));
        com_port_groupBox->setGeometry(QRect(600, 10, 371, 391));
        port_list_comboBox = new QComboBox(com_port_groupBox);
        port_list_comboBox->setObjectName(QString::fromUtf8("port_list_comboBox"));
        port_list_comboBox->setGeometry(QRect(10, 40, 131, 22));
        baudrate_comboBox = new QComboBox(com_port_groupBox);
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->addItem(QString());
        baudrate_comboBox->setObjectName(QString::fromUtf8("baudrate_comboBox"));
        baudrate_comboBox->setEnabled(true);
        baudrate_comboBox->setGeometry(QRect(160, 40, 71, 22));
        port_label = new QLabel(com_port_groupBox);
        port_label->setObjectName(QString::fromUtf8("port_label"));
        port_label->setGeometry(QRect(10, 20, 61, 16));
        baudrate_label = new QLabel(com_port_groupBox);
        baudrate_label->setObjectName(QString::fromUtf8("baudrate_label"));
        baudrate_label->setGeometry(QRect(160, 20, 71, 16));
        connect_pushButton = new QPushButton(com_port_groupBox);
        connect_pushButton->setObjectName(QString::fromUtf8("connect_pushButton"));
        connect_pushButton->setGeometry(QRect(250, 40, 51, 23));
        close_pushButton = new QPushButton(com_port_groupBox);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));
        close_pushButton->setGeometry(QRect(310, 40, 51, 23));
        connect_state_label = new QLabel(com_port_groupBox);
        connect_state_label->setObjectName(QString::fromUtf8("connect_state_label"));
        connect_state_label->setGeometry(QRect(250, 20, 71, 16));
        data_from_com_port_plainTextEdit = new QPlainTextEdit(com_port_groupBox);
        data_from_com_port_plainTextEdit->setObjectName(QString::fromUtf8("data_from_com_port_plainTextEdit"));
        data_from_com_port_plainTextEdit->setGeometry(QRect(10, 110, 351, 271));
        data_from_com_port_clear_all_pushButton = new QPushButton(com_port_groupBox);
        data_from_com_port_clear_all_pushButton->setObjectName(QString::fromUtf8("data_from_com_port_clear_all_pushButton"));
        data_from_com_port_clear_all_pushButton->setGeometry(QRect(300, 80, 61, 21));
        data_from_comport_auto_scroll_checkBox = new QCheckBox(com_port_groupBox);
        data_from_comport_auto_scroll_checkBox->setObjectName(QString::fromUtf8("data_from_comport_auto_scroll_checkBox"));
        data_from_comport_auto_scroll_checkBox->setGeometry(QRect(10, 80, 101, 17));
        ESP_Wifi_Config_Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ESP_Wifi_Config_Window);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 976, 22));
        ESP_Wifi_Config_Window->setMenuBar(menubar);
        statusbar = new QStatusBar(ESP_Wifi_Config_Window);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ESP_Wifi_Config_Window->setStatusBar(statusbar);
        QWidget::setTabOrder(ssid_lineEdit, ssid_pushButton);
        QWidget::setTabOrder(ssid_pushButton, password_lineEdit);
        QWidget::setTabOrder(password_lineEdit, password_pushButton);
        QWidget::setTabOrder(password_pushButton, dhcp_enable_checkBox);
        QWidget::setTabOrder(dhcp_enable_checkBox, dhcp_enable_pushButton);
        QWidget::setTabOrder(dhcp_enable_pushButton, static_ip_lineEdit);
        QWidget::setTabOrder(static_ip_lineEdit, static_ip_pushButton);
        QWidget::setTabOrder(static_ip_pushButton, gateway_lineEdit);
        QWidget::setTabOrder(gateway_lineEdit, gateway_pushButton);
        QWidget::setTabOrder(gateway_pushButton, subnet_lineEdit);
        QWidget::setTabOrder(subnet_lineEdit, subnet_pushButton);
        QWidget::setTabOrder(subnet_pushButton, connection_timeout_lineEdit);
        QWidget::setTabOrder(connection_timeout_lineEdit, connection_timeout_pushButton);
        QWidget::setTabOrder(connection_timeout_pushButton, basic_setting_to_text);
        QWidget::setTabOrder(basic_setting_to_text, text_to_basic_setting);
        QWidget::setTabOrder(text_to_basic_setting, file_path_lineEdit);
        QWidget::setTabOrder(file_path_lineEdit, file_load_pushButton);
        QWidget::setTabOrder(file_load_pushButton, file_save_pushButton);
        QWidget::setTabOrder(file_save_pushButton, configuration_data_plainTextEdit);
        QWidget::setTabOrder(configuration_data_plainTextEdit, submit_all_pushButton);
        QWidget::setTabOrder(submit_all_pushButton, device_reboot_pushButton);
        QWidget::setTabOrder(device_reboot_pushButton, get_properties_pushButton);
        QWidget::setTabOrder(get_properties_pushButton, wifi_connect_pushButton);
        QWidget::setTabOrder(wifi_connect_pushButton, wifi_disconnect_pushButton);
        QWidget::setTabOrder(wifi_disconnect_pushButton, port_list_comboBox);
        QWidget::setTabOrder(port_list_comboBox, baudrate_comboBox);
        QWidget::setTabOrder(baudrate_comboBox, connect_pushButton);
        QWidget::setTabOrder(connect_pushButton, close_pushButton);
        QWidget::setTabOrder(close_pushButton, data_from_com_port_plainTextEdit);

        retranslateUi(ESP_Wifi_Config_Window);

        QMetaObject::connectSlotsByName(ESP_Wifi_Config_Window);
    } // setupUi

    void retranslateUi(QMainWindow *ESP_Wifi_Config_Window)
    {
        ESP_Wifi_Config_Window->setWindowTitle(QCoreApplication::translate("ESP_Wifi_Config_Window", "WiFi Configuration", nullptr));
        wifi_station_setting_groupBox->setTitle(QCoreApplication::translate("ESP_Wifi_Config_Window", "WiFi Station Setting", nullptr));
        file_path_lable->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "File Path", nullptr));
        basic_setting_groupBox->setTitle(QCoreApplication::translate("ESP_Wifi_Config_Window", "Basic Setting", nullptr));
        static_ip_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Static IP", nullptr));
        gateway_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Gateway", nullptr));
        gateway_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit", nullptr));
        subnet_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit", nullptr));
        static_ip_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit", nullptr));
        subnet_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Subnet", nullptr));
        dhcp_enable_checkBox->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "DHCP Enable", nullptr));
        password_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit", nullptr));
        ssid_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit", nullptr));
        ssid_lable->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "SSID", nullptr));
        password_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Password", nullptr));
        dhcp_enable_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit", nullptr));
        connection_timeout_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Timeout", nullptr));
        connection_timeout_lineEdit->setText(QString());
        connection_timeout_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit", nullptr));
        submit_all_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Submit All", nullptr));
        file_load_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Load", nullptr));
        file_save_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Save", nullptr));
        basic_setting_to_text->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "->", nullptr));
        text_to_basic_setting->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "<-", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ESP_Wifi_Config_Window", "Quick Command", nullptr));
        get_properties_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Get Properties", nullptr));
        wifi_connect_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "WiFi Connect", nullptr));
        wifi_disconnect_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "WiFi Disconnect", nullptr));
        device_reboot_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Device Reboot", nullptr));
        configuration_data_clear_all_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Clear All", nullptr));
        com_port_groupBox->setTitle(QCoreApplication::translate("ESP_Wifi_Config_Window", "COM Port", nullptr));
        baudrate_comboBox->setItemText(0, QCoreApplication::translate("ESP_Wifi_Config_Window", "115200", nullptr));
        baudrate_comboBox->setItemText(1, QCoreApplication::translate("ESP_Wifi_Config_Window", "9600", nullptr));
        baudrate_comboBox->setItemText(2, QCoreApplication::translate("ESP_Wifi_Config_Window", "38400", nullptr));
        baudrate_comboBox->setItemText(3, QCoreApplication::translate("ESP_Wifi_Config_Window", "57600", nullptr));
        baudrate_comboBox->setItemText(4, QCoreApplication::translate("ESP_Wifi_Config_Window", "1200", nullptr));
        baudrate_comboBox->setItemText(5, QCoreApplication::translate("ESP_Wifi_Config_Window", "2400", nullptr));
        baudrate_comboBox->setItemText(6, QCoreApplication::translate("ESP_Wifi_Config_Window", "4800", nullptr));
        baudrate_comboBox->setItemText(7, QCoreApplication::translate("ESP_Wifi_Config_Window", "19200", nullptr));

        port_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Port", nullptr));
        baudrate_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "BaudRate", nullptr));
        connect_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Connect", nullptr));
        close_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Close", nullptr));
        connect_state_label->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Disconnected", nullptr));
        data_from_com_port_clear_all_pushButton->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Clear All", nullptr));
        data_from_comport_auto_scroll_checkBox->setText(QCoreApplication::translate("ESP_Wifi_Config_Window", "Auto Scroll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ESP_Wifi_Config_Window: public Ui_ESP_Wifi_Config_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESP_WIFI_CONFIG_WINDOW_H
