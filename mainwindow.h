#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QRegularExpression>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_registration_clicked();

    void on_radioButton_fem_clicked();

    void on_radioButton_male_clicked();

    void on_pushButton_saveFile_clicked();

    void on_pushButton_openFile_clicked();

private:
    Ui::MainWindow *ui;
    QString gender;
    bool validateUsername(const QString &username);
    bool validateFullName(const QString &fullName, QString &firstName, QString &lastName, QString &patronymic);
    bool validateBirthDate(const QString &birthDate, QString &formattedDate);
    bool validatePasport(const QString &pasport,QString &series, QString &number);
    bool validatePhoneNumber(const QString &phone, QString &formattedPhone);
    bool validateEmail(const QString &email);
    bool validateAll(QString &username, QString &firstName, QString &lastName, QString &patronymic,QString &series, QString &number, QString &formattedBirthDate, QString &formattedPhone, QString &email);
};
#endif // MAINWINDOW_H
