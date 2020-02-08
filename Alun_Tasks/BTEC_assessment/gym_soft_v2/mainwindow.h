#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "bm_calc.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_weight_combo_currentIndexChanged(const QString &arg1);

    void on_height_combo_currentIndexChanged(const QString &arg1);

    void on_run_clicked();


private:
    Ui::MainWindow *ui;
    bm_calc *b_c;

    void entered_values();
    void bmr();
    void bmi();

};

#endif // MAINWINDOW_H
