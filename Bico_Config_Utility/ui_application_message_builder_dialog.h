/********************************************************************************
** Form generated from reading UI file 'application_message_builder_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPLICATION_MESSAGE_BUILDER_DIALOG_H
#define UI_APPLICATION_MESSAGE_BUILDER_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Application_message_Builder_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QPlainTextEdit *result_string_plainTextEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *digital_read_pushButton;
    QPushButton *analog_read_pushButton;
    QPushButton *digital_read_gpio16_pushButton;
    QPushButton *digital_read_gpio5_pushButton;
    QPushButton *digital_read_gpio4_pushButton;
    QPushButton *digital_read_gpio14_pushButton;
    QPushButton *digital_read_gpio2_pushButton;
    QPushButton *digital_read_gpio0_pushButton;
    QPushButton *digital_read_gpio15_pushButton;
    QPushButton *digital_read_gpio13_pushButton;
    QPushButton *digital_read_gpio12_pushButton;
    QPushButton *analog_read_A0_pushButton;
    QWidget *tab_4;
    QPushButton *expression_pushButton;
    QPushButton *plus_pushButton;
    QPushButton *minus_pushButton;
    QPushButton *multiply_pushButton;
    QPushButton *divide_pushButton;
    QPushButton *num_1_pushButton;
    QPushButton *num_2_pushButton;
    QPushButton *num_3_pushButton;
    QPushButton *num_4_pushButton;
    QPushButton *num_5_pushButton;
    QPushButton *num_6_pushButton;
    QPushButton *num_7_pushButton;
    QPushButton *num_8_pushButton;
    QPushButton *num_9_pushButton;
    QPushButton *num_0_pushButton;
    QPushButton *pow_pushButton;
    QPushButton *round_bracket_open_pushButton;
    QPushButton *round_bracket_close_pushButton;
    QPushButton *exp_pushButton;
    QPushButton *sqrt_pushButton;
    QPushButton *ln_pushButton;
    QPushButton *log10_pushButton;
    QPushButton *log_pushButton;
    QPushButton *sin_pushButton;
    QPushButton *cos_pushButton;
    QPushButton *tan_pushButton;
    QPushButton *asinz_pushButton;
    QPushButton *acos_pushButton;
    QPushButton *atan_pushButton;
    QPushButton *comma_pushButton;
    QPushButton *dot_pushButton;
    QPushButton *not_operator_pushButton;
    QPushButton *compare_equal_pushButton;
    QPushButton *compare_not_equal_pushButton;
    QPushButton *logic_and_pushButton;
    QPushButton *logic_or_pushButton;
    QPushButton *compare_smaller_equal_pushButton;
    QPushButton *compare_greater_pushButton;
    QPushButton *compare_smaller_pushButton;
    QPushButton *compare_greater_equal_pushButton;
    QPushButton *generate_random_number_pushButton;
    QWidget *tab_2;
    QPushButton *get_client_id_pushButton;
    QCheckBox *complement_operator_checkBox;
    QPushButton *clear_all_pushButton;

    void setupUi(QDialog *Application_message_Builder_Dialog)
    {
        if (Application_message_Builder_Dialog->objectName().isEmpty())
            Application_message_Builder_Dialog->setObjectName(QString::fromUtf8("Application_message_Builder_Dialog"));
        Application_message_Builder_Dialog->resize(638, 474);
        buttonBox = new QDialogButtonBox(Application_message_Builder_Dialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(460, 420, 161, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        result_string_plainTextEdit = new QPlainTextEdit(Application_message_Builder_Dialog);
        result_string_plainTextEdit->setObjectName(QString::fromUtf8("result_string_plainTextEdit"));
        result_string_plainTextEdit->setGeometry(QRect(10, 40, 381, 371));
        tabWidget = new QTabWidget(Application_message_Builder_Dialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(410, 10, 221, 401));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        digital_read_pushButton = new QPushButton(tab);
        digital_read_pushButton->setObjectName(QString::fromUtf8("digital_read_pushButton"));
        digital_read_pushButton->setGeometry(QRect(20, 20, 75, 23));
        analog_read_pushButton = new QPushButton(tab);
        analog_read_pushButton->setObjectName(QString::fromUtf8("analog_read_pushButton"));
        analog_read_pushButton->setGeometry(QRect(120, 20, 75, 23));
        digital_read_gpio16_pushButton = new QPushButton(tab);
        digital_read_gpio16_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio16_pushButton"));
        digital_read_gpio16_pushButton->setEnabled(false);
        digital_read_gpio16_pushButton->setGeometry(QRect(30, 60, 51, 23));
        digital_read_gpio5_pushButton = new QPushButton(tab);
        digital_read_gpio5_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio5_pushButton"));
        digital_read_gpio5_pushButton->setEnabled(false);
        digital_read_gpio5_pushButton->setGeometry(QRect(30, 90, 51, 23));
        digital_read_gpio4_pushButton = new QPushButton(tab);
        digital_read_gpio4_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio4_pushButton"));
        digital_read_gpio4_pushButton->setEnabled(false);
        digital_read_gpio4_pushButton->setGeometry(QRect(30, 120, 51, 23));
        digital_read_gpio14_pushButton = new QPushButton(tab);
        digital_read_gpio14_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio14_pushButton"));
        digital_read_gpio14_pushButton->setEnabled(false);
        digital_read_gpio14_pushButton->setGeometry(QRect(30, 210, 51, 23));
        digital_read_gpio2_pushButton = new QPushButton(tab);
        digital_read_gpio2_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio2_pushButton"));
        digital_read_gpio2_pushButton->setEnabled(false);
        digital_read_gpio2_pushButton->setGeometry(QRect(30, 180, 51, 23));
        digital_read_gpio0_pushButton = new QPushButton(tab);
        digital_read_gpio0_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio0_pushButton"));
        digital_read_gpio0_pushButton->setEnabled(false);
        digital_read_gpio0_pushButton->setGeometry(QRect(30, 150, 51, 23));
        digital_read_gpio15_pushButton = new QPushButton(tab);
        digital_read_gpio15_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio15_pushButton"));
        digital_read_gpio15_pushButton->setEnabled(false);
        digital_read_gpio15_pushButton->setGeometry(QRect(30, 300, 51, 23));
        digital_read_gpio13_pushButton = new QPushButton(tab);
        digital_read_gpio13_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio13_pushButton"));
        digital_read_gpio13_pushButton->setEnabled(false);
        digital_read_gpio13_pushButton->setGeometry(QRect(30, 270, 51, 23));
        digital_read_gpio12_pushButton = new QPushButton(tab);
        digital_read_gpio12_pushButton->setObjectName(QString::fromUtf8("digital_read_gpio12_pushButton"));
        digital_read_gpio12_pushButton->setEnabled(false);
        digital_read_gpio12_pushButton->setGeometry(QRect(30, 240, 51, 23));
        analog_read_A0_pushButton = new QPushButton(tab);
        analog_read_A0_pushButton->setObjectName(QString::fromUtf8("analog_read_A0_pushButton"));
        analog_read_A0_pushButton->setEnabled(false);
        analog_read_A0_pushButton->setGeometry(QRect(130, 60, 51, 23));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        expression_pushButton = new QPushButton(tab_4);
        expression_pushButton->setObjectName(QString::fromUtf8("expression_pushButton"));
        expression_pushButton->setGeometry(QRect(70, 10, 75, 23));
        plus_pushButton = new QPushButton(tab_4);
        plus_pushButton->setObjectName(QString::fromUtf8("plus_pushButton"));
        plus_pushButton->setGeometry(QRect(20, 50, 21, 23));
        minus_pushButton = new QPushButton(tab_4);
        minus_pushButton->setObjectName(QString::fromUtf8("minus_pushButton"));
        minus_pushButton->setGeometry(QRect(70, 50, 21, 23));
        multiply_pushButton = new QPushButton(tab_4);
        multiply_pushButton->setObjectName(QString::fromUtf8("multiply_pushButton"));
        multiply_pushButton->setGeometry(QRect(120, 50, 21, 23));
        divide_pushButton = new QPushButton(tab_4);
        divide_pushButton->setObjectName(QString::fromUtf8("divide_pushButton"));
        divide_pushButton->setGeometry(QRect(170, 50, 21, 23));
        num_1_pushButton = new QPushButton(tab_4);
        num_1_pushButton->setObjectName(QString::fromUtf8("num_1_pushButton"));
        num_1_pushButton->setGeometry(QRect(60, 240, 21, 23));
        num_2_pushButton = new QPushButton(tab_4);
        num_2_pushButton->setObjectName(QString::fromUtf8("num_2_pushButton"));
        num_2_pushButton->setGeometry(QRect(90, 240, 21, 23));
        num_3_pushButton = new QPushButton(tab_4);
        num_3_pushButton->setObjectName(QString::fromUtf8("num_3_pushButton"));
        num_3_pushButton->setGeometry(QRect(120, 240, 21, 23));
        num_4_pushButton = new QPushButton(tab_4);
        num_4_pushButton->setObjectName(QString::fromUtf8("num_4_pushButton"));
        num_4_pushButton->setGeometry(QRect(60, 270, 21, 23));
        num_5_pushButton = new QPushButton(tab_4);
        num_5_pushButton->setObjectName(QString::fromUtf8("num_5_pushButton"));
        num_5_pushButton->setGeometry(QRect(90, 270, 21, 23));
        num_6_pushButton = new QPushButton(tab_4);
        num_6_pushButton->setObjectName(QString::fromUtf8("num_6_pushButton"));
        num_6_pushButton->setGeometry(QRect(120, 270, 21, 23));
        num_7_pushButton = new QPushButton(tab_4);
        num_7_pushButton->setObjectName(QString::fromUtf8("num_7_pushButton"));
        num_7_pushButton->setGeometry(QRect(60, 300, 21, 23));
        num_8_pushButton = new QPushButton(tab_4);
        num_8_pushButton->setObjectName(QString::fromUtf8("num_8_pushButton"));
        num_8_pushButton->setGeometry(QRect(90, 300, 21, 23));
        num_9_pushButton = new QPushButton(tab_4);
        num_9_pushButton->setObjectName(QString::fromUtf8("num_9_pushButton"));
        num_9_pushButton->setGeometry(QRect(120, 300, 21, 23));
        num_0_pushButton = new QPushButton(tab_4);
        num_0_pushButton->setObjectName(QString::fromUtf8("num_0_pushButton"));
        num_0_pushButton->setGeometry(QRect(90, 330, 21, 23));
        pow_pushButton = new QPushButton(tab_4);
        pow_pushButton->setObjectName(QString::fromUtf8("pow_pushButton"));
        pow_pushButton->setGeometry(QRect(20, 80, 21, 23));
        round_bracket_open_pushButton = new QPushButton(tab_4);
        round_bracket_open_pushButton->setObjectName(QString::fromUtf8("round_bracket_open_pushButton"));
        round_bracket_open_pushButton->setGeometry(QRect(70, 80, 21, 23));
        round_bracket_close_pushButton = new QPushButton(tab_4);
        round_bracket_close_pushButton->setObjectName(QString::fromUtf8("round_bracket_close_pushButton"));
        round_bracket_close_pushButton->setGeometry(QRect(120, 80, 21, 23));
        exp_pushButton = new QPushButton(tab_4);
        exp_pushButton->setObjectName(QString::fromUtf8("exp_pushButton"));
        exp_pushButton->setGeometry(QRect(10, 110, 41, 23));
        sqrt_pushButton = new QPushButton(tab_4);
        sqrt_pushButton->setObjectName(QString::fromUtf8("sqrt_pushButton"));
        sqrt_pushButton->setGeometry(QRect(150, 110, 51, 23));
        ln_pushButton = new QPushButton(tab_4);
        ln_pushButton->setObjectName(QString::fromUtf8("ln_pushButton"));
        ln_pushButton->setGeometry(QRect(10, 140, 41, 23));
        log10_pushButton = new QPushButton(tab_4);
        log10_pushButton->setObjectName(QString::fromUtf8("log10_pushButton"));
        log10_pushButton->setGeometry(QRect(70, 140, 61, 23));
        log_pushButton = new QPushButton(tab_4);
        log_pushButton->setObjectName(QString::fromUtf8("log_pushButton"));
        log_pushButton->setGeometry(QRect(150, 140, 51, 23));
        sin_pushButton = new QPushButton(tab_4);
        sin_pushButton->setObjectName(QString::fromUtf8("sin_pushButton"));
        sin_pushButton->setGeometry(QRect(10, 170, 41, 23));
        cos_pushButton = new QPushButton(tab_4);
        cos_pushButton->setObjectName(QString::fromUtf8("cos_pushButton"));
        cos_pushButton->setGeometry(QRect(70, 170, 61, 23));
        tan_pushButton = new QPushButton(tab_4);
        tan_pushButton->setObjectName(QString::fromUtf8("tan_pushButton"));
        tan_pushButton->setGeometry(QRect(150, 170, 51, 23));
        asinz_pushButton = new QPushButton(tab_4);
        asinz_pushButton->setObjectName(QString::fromUtf8("asinz_pushButton"));
        asinz_pushButton->setGeometry(QRect(10, 200, 41, 23));
        acos_pushButton = new QPushButton(tab_4);
        acos_pushButton->setObjectName(QString::fromUtf8("acos_pushButton"));
        acos_pushButton->setGeometry(QRect(70, 200, 61, 23));
        atan_pushButton = new QPushButton(tab_4);
        atan_pushButton->setObjectName(QString::fromUtf8("atan_pushButton"));
        atan_pushButton->setGeometry(QRect(150, 200, 51, 23));
        comma_pushButton = new QPushButton(tab_4);
        comma_pushButton->setObjectName(QString::fromUtf8("comma_pushButton"));
        comma_pushButton->setGeometry(QRect(60, 330, 21, 23));
        dot_pushButton = new QPushButton(tab_4);
        dot_pushButton->setObjectName(QString::fromUtf8("dot_pushButton"));
        dot_pushButton->setGeometry(QRect(120, 330, 21, 23));
        not_operator_pushButton = new QPushButton(tab_4);
        not_operator_pushButton->setObjectName(QString::fromUtf8("not_operator_pushButton"));
        not_operator_pushButton->setGeometry(QRect(170, 80, 21, 23));
        compare_equal_pushButton = new QPushButton(tab_4);
        compare_equal_pushButton->setObjectName(QString::fromUtf8("compare_equal_pushButton"));
        compare_equal_pushButton->setGeometry(QRect(170, 240, 31, 23));
        compare_not_equal_pushButton = new QPushButton(tab_4);
        compare_not_equal_pushButton->setObjectName(QString::fromUtf8("compare_not_equal_pushButton"));
        compare_not_equal_pushButton->setGeometry(QRect(170, 270, 31, 23));
        logic_and_pushButton = new QPushButton(tab_4);
        logic_and_pushButton->setObjectName(QString::fromUtf8("logic_and_pushButton"));
        logic_and_pushButton->setGeometry(QRect(170, 300, 31, 23));
        logic_or_pushButton = new QPushButton(tab_4);
        logic_or_pushButton->setObjectName(QString::fromUtf8("logic_or_pushButton"));
        logic_or_pushButton->setGeometry(QRect(170, 330, 31, 23));
        compare_smaller_equal_pushButton = new QPushButton(tab_4);
        compare_smaller_equal_pushButton->setObjectName(QString::fromUtf8("compare_smaller_equal_pushButton"));
        compare_smaller_equal_pushButton->setGeometry(QRect(10, 330, 21, 23));
        compare_greater_pushButton = new QPushButton(tab_4);
        compare_greater_pushButton->setObjectName(QString::fromUtf8("compare_greater_pushButton"));
        compare_greater_pushButton->setGeometry(QRect(10, 240, 21, 23));
        compare_smaller_pushButton = new QPushButton(tab_4);
        compare_smaller_pushButton->setObjectName(QString::fromUtf8("compare_smaller_pushButton"));
        compare_smaller_pushButton->setGeometry(QRect(10, 270, 21, 23));
        compare_greater_equal_pushButton = new QPushButton(tab_4);
        compare_greater_equal_pushButton->setObjectName(QString::fromUtf8("compare_greater_equal_pushButton"));
        compare_greater_equal_pushButton->setGeometry(QRect(10, 300, 21, 23));
        generate_random_number_pushButton = new QPushButton(tab_4);
        generate_random_number_pushButton->setObjectName(QString::fromUtf8("generate_random_number_pushButton"));
        generate_random_number_pushButton->setGeometry(QRect(70, 110, 61, 23));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        get_client_id_pushButton = new QPushButton(tab_2);
        get_client_id_pushButton->setObjectName(QString::fromUtf8("get_client_id_pushButton"));
        get_client_id_pushButton->setGeometry(QRect(20, 20, 75, 23));
        tabWidget->addTab(tab_2, QString());
        complement_operator_checkBox = new QCheckBox(Application_message_Builder_Dialog);
        complement_operator_checkBox->setObjectName(QString::fromUtf8("complement_operator_checkBox"));
        complement_operator_checkBox->setEnabled(true);
        complement_operator_checkBox->setGeometry(QRect(360, 40, 31, 17));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        complement_operator_checkBox->setFont(font);
        clear_all_pushButton = new QPushButton(Application_message_Builder_Dialog);
        clear_all_pushButton->setObjectName(QString::fromUtf8("clear_all_pushButton"));
        clear_all_pushButton->setGeometry(QRect(290, 420, 111, 23));
        complement_operator_checkBox->raise();
        buttonBox->raise();
        tabWidget->raise();
        clear_all_pushButton->raise();
        result_string_plainTextEdit->raise();

        retranslateUi(Application_message_Builder_Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Application_message_Builder_Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Application_message_Builder_Dialog, SLOT(reject()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Application_message_Builder_Dialog);
    } // setupUi

    void retranslateUi(QDialog *Application_message_Builder_Dialog)
    {
        Application_message_Builder_Dialog->setWindowTitle(QCoreApplication::translate("Application_message_Builder_Dialog", "Application Message Builder", nullptr));
        digital_read_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "Digital Read", nullptr));
        analog_read_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "Analog Read", nullptr));
        digital_read_gpio16_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO16", nullptr));
        digital_read_gpio5_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO5", nullptr));
        digital_read_gpio4_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO4", nullptr));
        digital_read_gpio14_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO14", nullptr));
        digital_read_gpio2_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO2", nullptr));
        digital_read_gpio0_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO0", nullptr));
        digital_read_gpio15_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO15", nullptr));
        digital_read_gpio13_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO13", nullptr));
        digital_read_gpio12_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "GPIO12", nullptr));
        analog_read_A0_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "A0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Application_message_Builder_Dialog", "Signal Read", nullptr));
        expression_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "Expression", nullptr));
        plus_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "+", nullptr));
        minus_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "-", nullptr));
        multiply_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "*", nullptr));
        divide_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "/", nullptr));
        num_1_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "1", nullptr));
        num_2_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "2", nullptr));
        num_3_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "3", nullptr));
        num_4_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "4", nullptr));
        num_5_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "5", nullptr));
        num_6_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "6", nullptr));
        num_7_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "7", nullptr));
        num_8_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "8", nullptr));
        num_9_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "9", nullptr));
        num_0_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "0", nullptr));
        pow_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "^", nullptr));
        round_bracket_open_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "(", nullptr));
        round_bracket_close_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", ")", nullptr));
        exp_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "exp(x)", nullptr));
        sqrt_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "sqrt(x,y)", nullptr));
        ln_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "ln(x)", nullptr));
        log10_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "log10(x)", nullptr));
        log_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "log(x,y)", nullptr));
        sin_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "sin(x)", nullptr));
        cos_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "cos(x)", nullptr));
        tan_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "tan(x)", nullptr));
        asinz_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "asin(x)", nullptr));
        acos_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "acos(x)", nullptr));
        atan_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "atan(x)", nullptr));
        comma_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", ",", nullptr));
        dot_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", ".", nullptr));
        not_operator_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "!", nullptr));
        compare_equal_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "==", nullptr));
        compare_not_equal_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "!=", nullptr));
        logic_and_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "and", nullptr));
        logic_or_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "or", nullptr));
        compare_smaller_equal_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "<=", nullptr));
        compare_greater_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", ">", nullptr));
        compare_smaller_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "<", nullptr));
        compare_greater_equal_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", ">=", nullptr));
        generate_random_number_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "random", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Application_message_Builder_Dialog", "Expression", nullptr));
        get_client_id_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "Client ID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Application_message_Builder_Dialog", "Other", nullptr));
        complement_operator_checkBox->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "!", nullptr));
        clear_all_pushButton->setText(QCoreApplication::translate("Application_message_Builder_Dialog", "Clear All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Application_message_Builder_Dialog: public Ui_Application_message_Builder_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPLICATION_MESSAGE_BUILDER_DIALOG_H
