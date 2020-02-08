#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


double age, weight, u_height;
QString gender, met_or_imp;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    b_c = new bm_calc();

    //Removes the buttons from the spinbox's
    ui->age_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->weight_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->height_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);

}

MainWindow::~MainWindow()
{
    delete ui;
}


//Function to change the height unit depending on the system being used for weight.
void MainWindow::on_weight_combo_currentIndexChanged(const QString &arg1){
    QString current_text = ui->weight_combo->currentText();
    if( current_text == "Pounds"){
        ui->height_combo->setCurrentIndex(1);
    }
    else if (current_text == "Kilograms") {
        ui->height_combo->setCurrentIndex(0);
    }
}

QString MainWindow::on_height_combo_currentIndexChanged(const QString &arg1){
    QString current_text = ui->height_combo->currentText();
    if( current_text == "Feet and Inches"){
        ui->weight_combo->setCurrentIndex(1);
        met_or_imp = "metric";
    }
    else if (current_text == "CM") {
        ui->weight_combo->setCurrentIndex(0);
        met_or_imp = "imperial";
    }

    return
}

void MainWindow::entered_values(){
    age = ui->age_spinbox->value();
    weight = ui->weight_spinbox->value();
    u_height = ui->height_spinbox->value();
    gender = ui->gender_combo->currentText();
}

void MainWindow::bmi(){
    //BMI
    double bmi=b_c->bmi_calc(weight, u_height);
    QString bmi_to_string = QString::number(bmi);
    QString new_bmi = QString("BMI is: %1").arg(bmi);
    ui->bmi_label->setText(new_bmi);

}

void MainWindow::bmr(){
    //BMR
    double bmr=b_c->bmr_calc(weight, u_height, age, gender);
    QString bmr_to_string = QString::number(bmr);
    QString new_bmr = QString("BMR is: %1").arg(bmr);
    ui->bmr_label->setText(new_bmr);

}

void MainWindow::on_run_clicked()
{

    //Sets the variables to the values entered by the user.
    entered_values();

    //Conversions and calculations
    bmi();
    bmr();


}

