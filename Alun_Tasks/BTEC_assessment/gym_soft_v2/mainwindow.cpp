#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>


double age, weight, u_height;
QString gender, met_or_imp;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow){
    ui->setupUi(this);
    b_c = new bm_calc();

    //Removes the buttons from the spinbox's
    ui->age_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->weight_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);
    ui->height_spinbox->setButtonSymbols(QAbstractSpinBox::NoButtons);

}

MainWindow::~MainWindow(){
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

void MainWindow::on_height_combo_currentIndexChanged(const QString &arg1){
    QString current_text = ui->height_combo->currentText();
    if( current_text == "Feet and Inches"){
        ui->weight_combo->setCurrentIndex(1);
        met_or_imp = "metric";
    }
    else if (current_text == "CM") {
        ui->weight_combo->setCurrentIndex(0);
        met_or_imp = "imperial";
    }
}

void MainWindow::entered_values(){
    age = ui->age_spinbox->value();
    weight = ui->weight_spinbox->value();
    u_height = ui->height_spinbox->value();
    gender = ui->gender_combo->currentText();
}

void MainWindow::bmi(){
    double bmi=b_c->bmi_calc(weight, u_height);
    QString new_bmi = QString("BMI is: %1").arg(bmi);
    ui->bmi_label->setText(new_bmi);
}

double MainWindow::bmr(double exercise_level){
    double bmr=b_c->bmr_calc(weight, u_height, age, gender);
    QString new_bmr = QString("BMR is: %1").arg(bmr);
    ui->bmr_label->setText(new_bmr);

    double kilocal = bmr * exercise_level;
    return kilocal;
}

void MainWindow::kilocal(){

    QString kilo_to_string;

    switch (ui->exercise_combo->currentIndex()) {
    case 0 :
        kilo_to_string = QString("Calories to maintain: %1").arg(bmr(1.2));
        ui->maintain_label->setText(kilo_to_string);
        break;
    case 1 :
        kilo_to_string = QString("Calories to maintain: %1").arg(bmr(1.375));
        ui->maintain_label->setText(kilo_to_string);
        break;
    case 2 :
        kilo_to_string = QString("Calories to maintain: %1").arg(bmr(1.55));
        ui->maintain_label->setText(kilo_to_string);
        break;
    case 3 :
        kilo_to_string = QString("Calories to maintain: %1").arg(bmr(1.725));
        ui->maintain_label->setText(kilo_to_string);
        break;
    case 4 :
        kilo_to_string = QString("Calories to maintain: %1").arg(bmr(1.9));
        ui->maintain_label->setText(kilo_to_string);
        break;
    }
}

void MainWindow::on_run_clicked(){
    //Sets the variables to the values entered by the user.
    entered_values();

    //Conversions and calculations
    bmi();
    kilocal();
}

