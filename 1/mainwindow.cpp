#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "math.h"
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

void MainWindow::on_pushButton_sum_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text(); // получение текстового значения первого числа
    QString text_2 = ui->lineEdit_value_2->text(); // получение текстового значения второго числа

    bool correct_1 = false; // значение по умолчанию false
    bool correct_2 = false; // значение по умолчанию false

    double value_1 = text_1.toDouble(&correct_1); // конвертируем строку в вещественное число
    double value_2 = text_2.toDouble(&correct_2); // конвертируем строку в вещественное число

    if (correct_1 && correct_2) // если оба значения корректны
    {
        double sum = value_1 + value_2; // считаем произведение двух чисел

        if (qIsInf(sum)) // если значение является бесконечностью
        {
            ui->label_result_value->setText("Бесконечность!"); // выводим ошибку
        }
        else if (qIsNaN(sum)) // если значение не является числом
        {
            ui->label_result_value->setText("Не число!"); // выводим ошибку
        }
        else
        {
            QString result = QString::number(sum, 'f', 10); // форматируем строку на 10 символов после запятой
            ui->label_result_value->setText(result); // выводим результат
        }
    }
    else // если значения некорректны
    {
        ui->label_result_value->setText("Ошибка!"); // выводим ошибку
    }
}


void MainWindow::on_pushButton_reduce_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text(); // получение текстового значения первого числа
    QString text_2 = ui->lineEdit_value_2->text(); // получение текстового значения второго числа

    bool correct_1 = false; // значение по умолчанию false
    bool correct_2 = false; // значение по умолчанию false

    double value_1 = text_1.toDouble(&correct_1); // конвертируем строку в вещественное число
    double value_2 = text_2.toDouble(&correct_2); // конвертируем строку в вещественное число

    if (correct_1 && correct_2) // если оба значения корректны
    {
        double reduce = value_1 - value_2; // считаем произведение двух чисел

        if (qIsInf(reduce)) // если значение является бесконечностью
        {
            ui->label_result_value->setText("Бесконечность!"); // выводим ошибку
        }
        else if (qIsNaN(reduce)) // если значение не является числом
        {
            ui->label_result_value->setText("Не число!"); // выводим ошибку
        }
        else
        {
            QString result = QString::number(reduce, 'f', 10); // форматируем строку на 10 символов после запятой
            ui->label_result_value->setText(result); // выводим результат
        }
    }
    else // если значения некорректны
    {
        ui->label_result_value->setText("Ошибка!"); // выводим ошибку
    }
}


void MainWindow::on_pushButton_multiply_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text(); // получение текстового значения первого числа
    QString text_2 = ui->lineEdit_value_2->text(); // получение текстового значения второго числа

    bool correct_1 = false; // значение по умолчанию false
    bool correct_2 = false; // значение по умолчанию false

    double value_1 = text_1.toDouble(&correct_1); // конвертируем строку в вещественное число
    double value_2 = text_2.toDouble(&correct_2); // конвертируем строку в вещественное число

    if (correct_1 && correct_2) // если оба значения корректны
    {
        double mul = value_1 * value_2; // считаем произведение двух чисел

        if (qIsInf(mul)) // если значение является бесконечностью
        {
            ui->label_result_value->setText("Бесконечность!"); // выводим ошибку
        }
        else if (qIsNaN(mul)) // если значение не является числом
        {
            ui->label_result_value->setText("Не число!"); // выводим ошибку
        }
        else
        {
            QString result = QString::number(mul, 'f', 10); // форматируем строку на 10 символов после запятой
            ui->label_result_value->setText(result); // выводим результат
        }
    }
    else // если значения некорректны
    {
        ui->label_result_value->setText("Ошибка!"); // выводим ошибку
    }
}


void MainWindow::on_pushButton_divide_clicked()
{
    QString text_1 = ui->lineEdit_value_1->text(); // получение текстового значения первого числа
    QString text_2 = ui->lineEdit_value_2->text(); // получение текстового значения второго числа

    bool correct_1 = false; // значение по умолчанию false
    bool correct_2 = false; // значение по умолчанию false

    double value_1 = text_1.toDouble(&correct_1); // конвертируем строку в вещественное число
    double value_2 = text_2.toDouble(&correct_2); // конвертируем строку в вещественное число

    if (correct_1 && correct_2) // если оба значения корректны
    {
        double divide = value_1 / value_2; // считаем произведение двух чисел

        if (qIsInf(divide)) // если значение является бесконечностью
        {
            ui->label_result_value->setText("Бесконечность!"); // выводим ошибку
        }
        else if (qIsNaN(divide)) // если значение не является числом
        {
            ui->label_result_value->setText("Не число!"); // выводим ошибку
        }
        else
        {
            QString result = QString::number(divide, 'f', 10); // форматируем строку на 10 символов после запятой
            ui->label_result_value->setText(result); // выводим результат
        }
    }
    else // если значения некорректны
    {
        ui->label_result_value->setText("Ошибка!"); // выводим ошибку
    }
}

void MainWindow::on_pushButton_sin_clicked()
{
    // добавить все необходимые проверки
    double value = ui->lineEdit_value_1->text().toDouble();

    if (ui->radioButton_grad->isChecked())
    {
        // если выбран расчёт в градусах
        double s = sin(value * M_PI / 180.0); // переводим градусы в радианы и считаем синус
        ui->label_result_value->setNum(s);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        // если выбран расчёт в радианах
        double s = sin(value); // считаем синус сразу в радианах
        ui->label_result_value->setNum(s);
    }
    else
    {
        // если не выбран никакой расчёт
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_cos_clicked()
{
    // добавить все необходимые проверки
    double value = ui->lineEdit_value_1->text().toDouble();

    if (ui->radioButton_grad->isChecked())
    {
        // если выбран расчёт в градусах
        double c = cos(value * M_PI / 180.0);
        ui->label_result_value->setNum(c);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        // если выбран расчёт в радианах
        double c = cos(value);
        ui->label_result_value->setNum(c);
    }
    else
    {
        // если не выбран никакой расчёт
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_tg_clicked()
{
    // добавить все необходимые проверки
    double value = ui->lineEdit_value_1->text().toDouble();

    if (ui->radioButton_grad->isChecked())
    {
        // если выбран расчёт в градусах
        double t = tan(value * M_PI / 180.0);
        ui->label_result_value->setNum(t);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        // если выбран расчёт в радианах
        double t = tan(value);
        ui->label_result_value->setNum(t);
    }
    else
    {
        // если не выбран никакой расчёт
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_ctg_clicked()
{
    // добавить все необходимые проверки
    double value = ui->lineEdit_value_1->text().toDouble();

    if (ui->radioButton_grad->isChecked())
    {
        // если выбран расчёт в градусах
        double ct = 1.0 / tan(value * M_PI / 180.0);
        ui->label_result_value->setNum(ct);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        // если выбран расчёт в радианах
        double ct = 1.0 / tan(value);
        ui->label_result_value->setNum(ct);
    }
    else
    {
        // если не выбран никакой расчёт
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_arcsin_clicked()
{
    double value = ui->lineEdit_value_1->text().toDouble();

    // Проверка на допустимый диапазон для арксинуса [-1, 1]
    if (value < -1.0 || value > 1.0)
    {
        ui->label_result_value->setText("Ошибка: [-1, 1]");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        double as = asin(value) * 180.0 / M_PI;
        ui->label_result_value->setNum(as);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        double as = asin(value);
        ui->label_result_value->setNum(as);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}


void MainWindow::on_pushButton_arccos_clicked()
{
    double value = ui->lineEdit_value_1->text().toDouble();

    // Проверка на допустимый диапазон для арккосинуса [-1, 1]
    if (value < -1.0 || value > 1.0)
    {
        ui->label_result_value->setText("Ошибка: [-1, 1]");
        return;
    }

    if (ui->radioButton_grad->isChecked())
    {
        double ac = acos(value) * 180.0 / M_PI;
        ui->label_result_value->setNum(ac);
    }
    else if (ui->radioButton_rad->isChecked())
    {
        double ac = acos(value);
        ui->label_result_value->setNum(ac);
    }
    else
    {
        ui->label_result_value->setText("Выберите тип!");
    }
}

