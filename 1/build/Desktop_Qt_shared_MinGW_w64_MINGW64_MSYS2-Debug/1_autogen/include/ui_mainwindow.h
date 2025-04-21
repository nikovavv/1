/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit_value_1;
    QLineEdit *lineEdit_value_2;
    QLabel *label_number_1;
    QLabel *label_number_2;
    QPushButton *pushButton_sum;
    QLabel *label_result_text;
    QLabel *label_result_value;
    QPushButton *pushButton_reduce;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_divide;
    QLabel *label_math_in;
    QRadioButton *radioButton_grad;
    QRadioButton *radioButton_rad;
    QPushButton *pushButton_sin;
    QPushButton *pushButton_ctg;
    QPushButton *pushButton_tg;
    QPushButton *pushButton_arcsin;
    QPushButton *pushButton_arccos;
    QPushButton *pushButton_cos;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lineEdit_value_1 = new QLineEdit(centralwidget);
        lineEdit_value_1->setObjectName("lineEdit_value_1");
        lineEdit_value_1->setGeometry(QRect(210, 70, 113, 26));
        lineEdit_value_2 = new QLineEdit(centralwidget);
        lineEdit_value_2->setObjectName("lineEdit_value_2");
        lineEdit_value_2->setGeometry(QRect(210, 120, 113, 26));
        label_number_1 = new QLabel(centralwidget);
        label_number_1->setObjectName("label_number_1");
        label_number_1->setGeometry(QRect(120, 70, 63, 20));
        label_number_2 = new QLabel(centralwidget);
        label_number_2->setObjectName("label_number_2");
        label_number_2->setGeometry(QRect(120, 120, 63, 20));
        pushButton_sum = new QPushButton(centralwidget);
        pushButton_sum->setObjectName("pushButton_sum");
        pushButton_sum->setGeometry(QRect(110, 170, 93, 29));
        label_result_text = new QLabel(centralwidget);
        label_result_text->setObjectName("label_result_text");
        label_result_text->setGeometry(QRect(120, 210, 71, 20));
        label_result_value = new QLabel(centralwidget);
        label_result_value->setObjectName("label_result_value");
        label_result_value->setGeometry(QRect(230, 210, 371, 20));
        pushButton_reduce = new QPushButton(centralwidget);
        pushButton_reduce->setObjectName("pushButton_reduce");
        pushButton_reduce->setGeometry(QRect(210, 170, 93, 29));
        pushButton_multiply = new QPushButton(centralwidget);
        pushButton_multiply->setObjectName("pushButton_multiply");
        pushButton_multiply->setGeometry(QRect(310, 170, 93, 29));
        pushButton_divide = new QPushButton(centralwidget);
        pushButton_divide->setObjectName("pushButton_divide");
        pushButton_divide->setGeometry(QRect(410, 170, 93, 29));
        label_math_in = new QLabel(centralwidget);
        label_math_in->setObjectName("label_math_in");
        label_math_in->setGeometry(QRect(392, 40, 111, 20));
        radioButton_grad = new QRadioButton(centralwidget);
        radioButton_grad->setObjectName("radioButton_grad");
        radioButton_grad->setGeometry(QRect(380, 70, 110, 24));
        radioButton_rad = new QRadioButton(centralwidget);
        radioButton_rad->setObjectName("radioButton_rad");
        radioButton_rad->setGeometry(QRect(500, 70, 110, 24));
        pushButton_sin = new QPushButton(centralwidget);
        pushButton_sin->setObjectName("pushButton_sin");
        pushButton_sin->setGeometry(QRect(410, 110, 93, 29));
        pushButton_ctg = new QPushButton(centralwidget);
        pushButton_ctg->setObjectName("pushButton_ctg");
        pushButton_ctg->setGeometry(QRect(610, 110, 93, 29));
        pushButton_tg = new QPushButton(centralwidget);
        pushButton_tg->setObjectName("pushButton_tg");
        pushButton_tg->setGeometry(QRect(610, 70, 93, 29));
        pushButton_arcsin = new QPushButton(centralwidget);
        pushButton_arcsin->setObjectName("pushButton_arcsin");
        pushButton_arcsin->setGeometry(QRect(610, 140, 93, 29));
        pushButton_arccos = new QPushButton(centralwidget);
        pushButton_arccos->setObjectName("pushButton_arccos");
        pushButton_arccos->setGeometry(QRect(610, 180, 93, 29));
        pushButton_cos = new QPushButton(centralwidget);
        pushButton_cos->setObjectName("pushButton_cos");
        pushButton_cos->setGeometry(QRect(510, 110, 93, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_number_1->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 1:", nullptr));
        label_number_2->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276 2:", nullptr));
        pushButton_sum->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        label_result_text->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202", nullptr));
        label_result_value->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));
        pushButton_reduce->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\207\320\270\321\202\320\260\320\275\320\270\320\265", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\275\320\276\320\266\320\265\320\275\320\270\320\265", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\273\320\265\320\275\320\270\320\265", nullptr));
        label_math_in->setText(QCoreApplication::translate("MainWindow", "\320\241\321\207\320\270\321\202\320\260\321\202\321\214 \320\262:", nullptr));
        radioButton_grad->setText(QCoreApplication::translate("MainWindow", "\320\223\321\200\320\260\320\264\321\203\321\201\321\213", nullptr));
        radioButton_rad->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\320\264\320\270\320\260\320\275\321\213", nullptr));
        pushButton_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        pushButton_ctg->setText(QCoreApplication::translate("MainWindow", "ctg", nullptr));
        pushButton_tg->setText(QCoreApplication::translate("MainWindow", "tg", nullptr));
        pushButton_arcsin->setText(QCoreApplication::translate("MainWindow", "arcsin", nullptr));
        pushButton_arccos->setText(QCoreApplication::translate("MainWindow", "arccos", nullptr));
        pushButton_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
