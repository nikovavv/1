#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_pushButton_sum_clicked();

    void on_pushButton_reduce_clicked();

    void on_pushButton_multiply_clicked();

    void on_pushButton_divide_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

    void on_pushButton_tg_clicked();

    void on_pushButton_ctg_clicked();

    void on_pushButton_arcsin_clicked();

    void on_pushButton_arccos_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
