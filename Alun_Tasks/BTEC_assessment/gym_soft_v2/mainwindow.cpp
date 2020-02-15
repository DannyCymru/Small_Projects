#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QFileDialog>
#include <QMessageBox>


double age, weight, u_height, bmi, bmr, kilo_cal;
QString gender, met_or_imp = "Metric";

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
        met_or_imp = "imperial";
    }
    else if (current_text == "Kilograms") {
        ui->height_combo->setCurrentIndex(0);
        met_or_imp = "metric";
    }
}

//Function to change the weight unit depending on the height
void MainWindow::on_height_combo_currentIndexChanged(const QString &arg1){
    QString current_text = ui->height_combo->currentText();
    if(current_text == "Inches"){
        ui->weight_combo->setCurrentIndex(1);
        met_or_imp = "imperial";
    }
    else if (current_text == "CM") {
        ui->weight_combo->setCurrentIndex(0);
        met_or_imp = "metric";
    }
}

//Sets all the values to the global variables.
void MainWindow::entered_values(){
    age = ui->age_spinbox->value();
    weight = ui->weight_spinbox->value();
    u_height = ui->height_spinbox->value();
    gender = ui->gender_combo->currentText();
}

//Sets bmi label
void MainWindow::bmi_label(double bmi){
    QString new_bmi = QString("BMI is: %1").arg(bmi);
    ui->bmi_label->setText(new_bmi);
}

//Sets bmr label
void MainWindow::bmr_label(double bmr){
    QString new_bmr = QString("BMR is: %1").arg(bmr);
    ui->bmr_label->setText(new_bmr);
}

void MainWindow::kilocal(){
    switch (ui->exercise_combo->currentIndex()) {
    case 0 :       
        kilo_cal = b_c->kilo_cals(bmr,1.2);
        break;
    case 1 :
        kilo_cal = b_c->kilo_cals(bmr,1.375);
        break;
    case 2 :
        kilo_cal = b_c->kilo_cals(bmr,1.55);
        break;
    case 3 :
        kilo_cal = b_c->kilo_cals(bmr,1.725);
        break;
    case 4 :
        kilo_cal = b_c->kilo_cals(bmr,1.9);
        break;
    }
}

void MainWindow::kilo_label(double kilo_cal){
    QString kilo_to_string;
    kilo_to_string = QString("Calories to maintain: %1").arg(kilo_cal);
    ui->maintain_label->setText(kilo_to_string);
}

void MainWindow::on_run_clicked(){
    //Sets the variables to the values entered by the user.
    entered_values();
    //Conversions and calculations
    bmi=b_c->bmi_calc(weight, u_height, met_or_imp);
    bmi_label(bmi);
    bmr=b_c->bmr_switch(weight, u_height, age, gender, met_or_imp);
    bmr_label(bmr);
    kilocal();
    kilo_label(kilo_cal);
}


void MainWindow::on_actionExit_triggered(){
    QApplication::quit();
}

//Clears all the variables and ui elements to allow for a fresh gui to interact with
void MainWindow::on_actionNew_triggered()
{
    weight = 30;
    u_height = 0;
    met_or_imp = "Metric";
    bmi = 0;
    bmr = 0;
    age = 0;
    kilo_cal = 0;

    ui->age_spinbox->clear();
    ui->weight_spinbox->clear();
    ui-> weight_combo->setCurrentIndex(0);
    ui->height_spinbox->clear();
    ui->height_combo->setCurrentIndex(0);
    ui->gender_combo->setCurrentIndex(0);
    ui->gender_label->clear();
    ui->bmi_label->clear();
    ui->bmr_label->clear();
    ui->exercise_combo->clear();
    ui->maintain_label->clear();
}

void MainWindow::save_to_file(){
    QString file_name = QFileDialog::getSaveFileName(this,
                                                     tr("Save fitness data"), "",
                                                     tr("Fitness File (*.fit);; All Files (*)"));
    if(file_name.isEmpty())
        return;
    else{
        QFile file(file_name);
        if(!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this,
                                     tr("Unable to open file"),
                                     file.errorString());
            return;
        }

        QDataStream out(&file);
        out.setVersion(QDataStream::Qt_5_0);
        out << ui->bmi_label->text();
    }
}

void MainWindow::load_from_file(){
    QString file_name = QFileDialog::getOpenFileName(this,
                                                     tr("Open fitness file"), "",
                                                     tr("Fitness file (*.fit);;All Files (*)"));
    if (file_name.isEmpty()){
            return;
    }
            else {
            QFile file(file_name);
            qDebug() << file_name;
            if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                                     file.errorString());
            return;
}
            QDataStream in(&file);
            in.setVersion(QDataStream::Qt_5_0);
            ui->bmi_label->clear();
            QString bmi_label_in;
            in >> bmi_label_in;

            if(bmi_label_in.isEmpty()){
                QMessageBox::information(this, tr("No data in file"),tr("The file you are attempting to open contains no data "));
            } else {
                ui->bmi_label->setText(bmi_label_in);
            }

    }
}

void MainWindow::on_actionSave_triggered()
{
    save_to_file();
}

void MainWindow::on_actionOpen_triggered()
{
    load_from_file();
}
