#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDate>
#include <QFile>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("background-color: lightblue;");
    ui->lineEdit_value_1->setMaxLength(15); //установка ограничения на длину ввода
    ui->lineEdit_value_2->setMaxLength(50);
    ui->lineEdit_value_3->setMaxLength(11);
    ui->lineEdit_value_4->setMaxLength(10); // Дата рождения
    ui->lineEdit_value_5->setMaxLength(16); // Телефон (+7-XXX-XXX-XX-XX)
    ui->lineEdit_value_6->setMaxLength(20); // Email
    setWindowTitle("Регистрация пользователя");
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::validateUsername(const QString &username)
{
    if (username.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Имя пользователя не может быть пустым.");
        return false;
    }
    QRegularExpression regex("^[A-Za-z0-9]{1,15}$");
    QRegularExpressionMatch match = regex.match(username);
    if (!match.hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Имя пользователя может содержать только латинские буквы и цифры.");
        return false;
    }
    return true;
}

bool MainWindow::validateFullName(const QString &fullName, QString &firstName, QString &lastName, QString &patronymic)
{
    QRegularExpression regex("^([А-ЯЁA-Z][а-яёa-z]{1,14})\\s([А-ЯЁA-Z][а-яёa-z]{1,14})\\s([А-ЯЁA-Z][а-яёa-z]{1,14})$");
    QRegularExpressionMatch match = regex.match(fullName);
    if (fullName.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "ФИО не может быть пустым");
        return false;
    }
    if (!match.hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "ФИО должны начинается с заглавной буквы, содержит только буквы.");
        return false;
    }

    // Извлекаем компоненты ФИО
    lastName = match.captured(1);    // Фамилия
    firstName = match.captured(2);   // Имя
    patronymic = match.captured(3);  // Отчество

    return true;
}
bool MainWindow::validatePasport(const QString &pasport,QString &series, QString &number)
{
    if (pasport.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Паспорт не может быть пустым");
        return false;
    }
    QRegularExpression regex("^([0-9]{4})\\s([0-9]{6})$");
    QRegularExpressionMatch match = regex.match(pasport);
    if (!match.hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Паспорт может содержать только цифры, серия состоит из 4 символов, номер состоит из 6 символов.");
        return false;
    }
    series = match.captured(1);    // Фамилия
    number = match.captured(2);   // Имя
    return true;
}
void MainWindow::on_radioButton_fem_clicked()
{
     gender = "женский";
}
void MainWindow::on_radioButton_male_clicked()
{
     gender = "мужской";
}
bool MainWindow::validateBirthDate(const QString &birthDate, QString &formattedDate)
{
    if (birthDate.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Дата рождения не может быть пустой");
        return false;
    }

    QRegularExpression regex("^(0[1-9]|[12][0-9]|3[01])\\.(0[1-9]|1[0-2])\\.((19|20)(\\d{2}))$");
    QRegularExpressionMatch match = regex.match(birthDate);

    if (!match.hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Дата рождения должна быть в формате ДД.ММ.ГГГГ (например, 01.08.2005)");
        return false;
    }

    int day = match.captured(1).toInt();
    int month = match.captured(2).toInt();
    int year = match.captured(3).toInt();

    QDate date = QDate::fromString(birthDate, "dd.MM.yyyy");
    if (!date.isValid()) {
        QMessageBox::warning(this, "Ошибка", "Некорректная дата рождения");
        return false;
    }

    // Форматируем дату
    QString monthName;
    switch(month) {
    case 1: monthName = "января"; break;
    case 2: monthName = "февраля"; break;
    case 3: monthName = "марта"; break;
    case 4: monthName = "апреля"; break;
    case 5: monthName = "мая"; break;
    case 6: monthName = "июня"; break;
    case 7: monthName = "июля"; break;
    case 8: monthName = "августа"; break;
    case 9: monthName = "сентября"; break;
    case 10: monthName = "октября"; break;
    case 11: monthName = "ноября"; break;
    case 12: monthName = "декабря"; break;
    }

    formattedDate = QString("%1 %2 %3 года").arg(day).arg(monthName).arg(year);
    return true;
}
bool MainWindow::validatePhoneNumber(const QString &phone,QString &formattedPhone)
{
    if (phone.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Номер телефона не может быть пустым");
        return false;
    }

    QRegularExpression regex("^\\+7-(\\d{3})-(\\d{3})-(\\d{2})-(\\d{2})$");
    QRegularExpressionMatch match = regex.match(phone);
    if (!regex.match(phone).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Номер телефона должен быть в формате +7-XXX-XXX-XX-XX");
        return false;
    }
    formattedPhone = "8" + match.captured(1) + match.captured(2) + match.captured(3) + match.captured(4);
    return true;
}
bool MainWindow::validateEmail(const QString &email)
{
    if (email.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Email не может быть пустым");
        return false;
    }

    QRegularExpression regex("^[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\\.[a-zA-Z]{2,}$");
    if (!regex.match(email).hasMatch()) {
        QMessageBox::warning(this, "Ошибка", "Некорректный формат email");
        return false;
    }
    return true;
}
bool MainWindow::validateAll(QString &username, QString &firstName, QString &lastName, QString &patronymic,
                             QString &series, QString &number, QString &formattedBirthDate, QString &formattedPhone,QString &email)
{   username = ui->lineEdit_value_1->text().trimmed();
    QString fullName = ui->lineEdit_value_2->text().trimmed();
    QString pasport = ui->lineEdit_value_3->text().trimmed();
    QString birthDate = ui->lineEdit_value_4->text().trimmed();
    QString phone = ui->lineEdit_value_5->text().trimmed();
    email = ui->lineEdit_value_6->text().trimmed();

    return validateUsername(username) &&
           validateFullName(fullName, firstName, lastName, patronymic) &&
           validatePasport(pasport, series, number) &&
           validateBirthDate(birthDate, formattedBirthDate) &&
           validatePhoneNumber(phone,formattedPhone) &&
           validateEmail(email);

}
void MainWindow::on_pushButton_registration_clicked()
{
    QString username, firstName, lastName, patronymic, series, number, formattedBirthDate, formattedPhone, email;

    if (validateAll(username, firstName, lastName, patronymic, series, number, formattedBirthDate, formattedPhone, email)) {

        if (gender.isEmpty()) {
            QMessageBox::warning(this, "Ошибка", "Пожалуйста, выберите пол.");
            return;
        }

        QString message = QString(
                              "Вы успешно зарегистрировали аккаунт %1.\n"
                              "Ваше имя: %2, фамилия: %3, отчество: %4.\n"
                              "Паспорт: серия %5, номер %6.\n"
                              "Дата рождения: %7.\n"
                              "Пол: %8.\n"
                              "Ваш номер телефона: %9.\n"
                              "Ваш email: %10.")
                              .arg(username, firstName, lastName, patronymic,
                                   series, number, formattedBirthDate, gender,
                                   formattedPhone, email);

        QMessageBox::information(this, "Регистрация", message);
    }
}

void MainWindow::on_pushButton_saveFile_clicked()
{
    QString username, firstName, lastName, patronymic, series, number, formattedBirthDate, formattedPhone, email;

    if (!validateAll(username, firstName, lastName, patronymic, series, number, formattedBirthDate, formattedPhone, email)) {
        return;
    }

    if (gender.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Пожалуйста, выберите пол.");
        return;
    }

    QString fileName = QFileDialog::getSaveFileName(this, "Сохранить файл", "", "Text (*.txt)");
    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Вы не выбрали файл!");
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл!");
        return;
    }

    QTextStream ts(&file);
    ts << username << '\n';
    ts << lastName << '\n';
    ts << firstName << '\n';
    ts << patronymic << '\n';
    ts << series << '\n';
    ts << number << '\n';
    ts << formattedBirthDate << '\n';
    ts << gender << '\n';
    ts << formattedPhone << '\n';
    ts << email << '\n';

    file.close();
    QMessageBox::information(this, "Успех", "Данные успешно сохранены в файл!");
}


void MainWindow::on_pushButton_openFile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Открыть файл", "", "Text (*.txt)");
    if (fileName.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Вы не выбрали файл!");
        return;
    }

    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::warning(this, "Ошибка", "Не удалось открыть файл!");
        return;
    }

    QTextStream ts(&file);

    QString username, lastName, firstName, patronymic, series, number, formattedBirthDate, readGender, phone, email;

    username = ts.readLine();
    lastName = ts.readLine();
    firstName = ts.readLine();
    patronymic = ts.readLine();
    series = ts.readLine();
    number = ts.readLine();
    formattedBirthDate = ts.readLine();
    readGender = ts.readLine();
    phone = ts.readLine();
    email = ts.readLine();

    file.close();

    // Установка данных в поля формы
    ui->lineEdit_value_1->setText(username);
    ui->lineEdit_value_2->setText(QString("%1 %2 %3").arg(lastName, firstName, patronymic));
    ui->lineEdit_value_3->setText(QString("%1 %2").arg(series, number));
    QLocale russian(QLocale::Russian, QLocale::Russia);
    QDate birth = russian.toDate(formattedBirthDate, "d MMMM yyyy года");
    ui->lineEdit_value_4->setText(birth.toString("dd.MM.yyyy"));
    ui->lineEdit_value_5->setText(QString("+7-%1-%2-%3-%4")
                                      .arg(phone.mid(1,3), phone.mid(4,3), phone.mid(7,2), phone.mid(9,2)));
    ui->lineEdit_value_6->setText(email);

    if (readGender == "мужской") {
        ui->radioButton_male->setChecked(true);
        gender = "мужской";
    } else if (readGender == "женский") {
        ui->radioButton_fem->setChecked(true);
        gender = "женский";
    }

    QMessageBox::information(this, "Успех", "Данные успешно загружены из файла!");
}

