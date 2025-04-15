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
    QLabel *label_form;
    QLabel *label_name;
    QLabel *label_fio;
    QLabel *label_pasport;
    QLabel *label_data;
    QLabel *label_sex;
    QLabel *label_number;
    QLabel *label_email;
    QLineEdit *lineEdit_value_1;
    QLineEdit *lineEdit_value_2;
    QLineEdit *lineEdit_value_3;
    QLineEdit *lineEdit_value_4;
    QLineEdit *lineEdit_value_5;
    QLineEdit *lineEdit_value_6;
    QRadioButton *radioButton_fem;
    QRadioButton *radioButton_male;
    QPushButton *pushButton_registration;
    QPushButton *pushButton_saveFile;
    QPushButton *pushButton_openFile;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_form = new QLabel(centralwidget);
        label_form->setObjectName("label_form");
        label_form->setGeometry(QRect(350, 20, 191, 20));
        QFont font;
        font.setBold(true);
        label_form->setFont(font);
        label_name = new QLabel(centralwidget);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(70, 60, 141, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_name->sizePolicy().hasHeightForWidth());
        label_name->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setHintingPreference(QFont::PreferVerticalHinting);
        label_name->setFont(font1);
        label_fio = new QLabel(centralwidget);
        label_fio->setObjectName("label_fio");
        label_fio->setGeometry(QRect(70, 100, 63, 20));
        label_pasport = new QLabel(centralwidget);
        label_pasport->setObjectName("label_pasport");
        label_pasport->setGeometry(QRect(70, 130, 63, 20));
        label_data = new QLabel(centralwidget);
        label_data->setObjectName("label_data");
        label_data->setGeometry(QRect(70, 190, 121, 20));
        label_sex = new QLabel(centralwidget);
        label_sex->setObjectName("label_sex");
        label_sex->setGeometry(QRect(70, 160, 63, 20));
        label_number = new QLabel(centralwidget);
        label_number->setObjectName("label_number");
        label_number->setGeometry(QRect(70, 220, 63, 20));
        label_email = new QLabel(centralwidget);
        label_email->setObjectName("label_email");
        label_email->setGeometry(QRect(70, 250, 63, 20));
        lineEdit_value_1 = new QLineEdit(centralwidget);
        lineEdit_value_1->setObjectName("lineEdit_value_1");
        lineEdit_value_1->setGeometry(QRect(220, 60, 371, 21));
        lineEdit_value_2 = new QLineEdit(centralwidget);
        lineEdit_value_2->setObjectName("lineEdit_value_2");
        lineEdit_value_2->setGeometry(QRect(220, 100, 371, 21));
        lineEdit_value_3 = new QLineEdit(centralwidget);
        lineEdit_value_3->setObjectName("lineEdit_value_3");
        lineEdit_value_3->setGeometry(QRect(220, 130, 371, 21));
        lineEdit_value_4 = new QLineEdit(centralwidget);
        lineEdit_value_4->setObjectName("lineEdit_value_4");
        lineEdit_value_4->setGeometry(QRect(220, 190, 371, 21));
        lineEdit_value_5 = new QLineEdit(centralwidget);
        lineEdit_value_5->setObjectName("lineEdit_value_5");
        lineEdit_value_5->setGeometry(QRect(220, 220, 371, 21));
        lineEdit_value_6 = new QLineEdit(centralwidget);
        lineEdit_value_6->setObjectName("lineEdit_value_6");
        lineEdit_value_6->setGeometry(QRect(220, 260, 371, 21));
        radioButton_fem = new QRadioButton(centralwidget);
        radioButton_fem->setObjectName("radioButton_fem");
        radioButton_fem->setGeometry(QRect(220, 160, 110, 24));
        radioButton_male = new QRadioButton(centralwidget);
        radioButton_male->setObjectName("radioButton_male");
        radioButton_male->setGeometry(QRect(360, 160, 110, 24));
        pushButton_registration = new QPushButton(centralwidget);
        pushButton_registration->setObjectName("pushButton_registration");
        pushButton_registration->setGeometry(QRect(220, 290, 93, 29));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_registration->sizePolicy().hasHeightForWidth());
        pushButton_registration->setSizePolicy(sizePolicy1);
        pushButton_registration->setFont(font);
        pushButton_saveFile = new QPushButton(centralwidget);
        pushButton_saveFile->setObjectName("pushButton_saveFile");
        pushButton_saveFile->setGeometry(QRect(320, 290, 161, 29));
        pushButton_saveFile->setFont(font);
        pushButton_openFile = new QPushButton(centralwidget);
        pushButton_openFile->setObjectName("pushButton_openFile");
        pushButton_openFile->setGeometry(QRect(480, 290, 111, 29));
        pushButton_openFile->setFont(font);
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
        label_form->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\320\260 \321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\320\270", nullptr));
        label_name->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217:", nullptr));
        label_fio->setText(QCoreApplication::translate("MainWindow", "\320\244\320\230\320\236:", nullptr));
        label_pasport->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202:", nullptr));
        label_data->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217:", nullptr));
        label_sex->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273:", nullptr));
        label_number->setText(QCoreApplication::translate("MainWindow", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275:", nullptr));
        label_email->setText(QCoreApplication::translate("MainWindow", "E-mail:", nullptr));
        radioButton_fem->setText(QCoreApplication::translate("MainWindow", "\320\226\320\265\320\275\321\201\320\272\320\270\320\271", nullptr));
        radioButton_male->setText(QCoreApplication::translate("MainWindow", "\320\234\321\203\320\266\321\201\320\272\320\276\320\271", nullptr));
        pushButton_registration->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        pushButton_saveFile->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        pushButton_openFile->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
