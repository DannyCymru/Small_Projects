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


    void on_actionExit_triggered();

    void on_actionNew_triggered();

    void on_actionSave_triggered();

    void on_actionOpen_triggered();


private:
    Ui::MainWindow *ui;
    bm_calc *b_c;

    void entered_values();
    void bmi_label(double bmi);
    void bmr_label(double bmr);
    void kilocal();
    void kilo_label(double kilo_cal);
    void load_from_file();
    void save_to_file();
    void clear_all();
    void load_data(QString bmi_in, QString bmr_in, QString kilo_in, QString gender_combo_in, double age_spin_in,
                   double weight_spin_in, QString weight_combo_in,
                   double height_spin_in, QString height_combo_in);

};

#endif // MAINWINDOW_H
