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
void MainWindow::on_actionNew_triggered(){
    clear_all();
}

void MainWindow::on_actionSave_triggered(){
    save_to_file();
}

void MainWindow::on_actionOpen_triggered(){
    load_from_file();
}

//Clears all boxes and variables
void MainWindow::clear_all(){
    weight = 0;
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
    ui->maintain_label->clear();

}

//Function to save data as a .fit document
void MainWindow::save_to_file(){

    QFileDialog dialog;
    QString file_name = QFileDialog::getSaveFileName(this,
                                               tr("Save fitness data"), "",
                                               "Fitness File (*.fit);; All Files (*)");
    if(file_name.isEmpty())
        return;
    else{
        //forces saved files to end with .fit
        if(!file_name.endsWith(".fit")){
            file_name.append(".fit");
        }
        QFile file(file_name);
        if(!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this,
                                     tr("Unable to open file"),
                                     file.errorString());
            return;
        }

        QDataStream out(&file);
        out.setVersion(QDataStream::Qt_5_0);
        //Outstream for all of the data that I want to save
        out << ui->bmi_label->text() << ui->bmr_label->text() << ui->maintain_label->text()
            << ui->gender_combo->currentText() << ui->age_spinbox->value() << ui->weight_spinbox->value()
            << ui->weight_combo->currentText() << ui->height_spinbox->value() << ui->height_combo->currentText();
    }
}

//Loads data from txt or .fit file
void MainWindow::load_from_file(){
    QString file_name = QFileDialog::getOpenFileName(this,
                                                     tr("Open fitness file"), "",
                                                     tr("Fitness file (*.fit);;All Files (*)"));
    if (file_name.isEmpty()){
            return;
    }
            else {
            QFile file(file_name);
            if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                                     file.errorString());
            return;
}
            QDataStream in(&file);
            in.setVersion(QDataStream::Qt_5_0);
            clear_all();

            //Strings and doubles for all the incoming data
            QString bmi_in, bmr_in, kilo_in, gender_combo_in,
                    weight_combo_in, height_combo_in;
            double age_spin_in, weight_spin_in, height_spin_in;

            //All the incoming data
            in >> bmi_in >> bmr_in >> kilo_in >> gender_combo_in >> age_spin_in
               >> weight_spin_in >> weight_combo_in >> height_spin_in >> height_combo_in;

            if(bmi_in.isEmpty()){
                QMessageBox::information(this, tr("No data in file"),tr("The file you are attempting to open contains no data "));
            } else {
                load_data(bmi_in, bmr_in, kilo_in, gender_combo_in, age_spin_in,
                          weight_spin_in, weight_combo_in,
                          height_spin_in, height_combo_in);
            }

    }
}

//Function to handle taking all the saved information and putting it into the correct UI object
void MainWindow::load_data(QString bmi_in, QString bmr_in, QString kilo_in, QString gender_combo_in, double age_spin_in,
                           double weight_spin_in, QString weight_combo_in,
                           double height_spin_in, QString height_combo_in){
    ui->bmi_label->setText(bmi_in);
    ui->bmr_label->setText(bmr_in);
    ui->maintain_label->setText(kilo_in);
    ui->gender_combo->setCurrentText(gender_combo_in);
    ui->age_spinbox->setValue(age_spin_in);
    ui->weight_spinbox->setValue(weight_spin_in);
    ui->weight_combo->setCurrentText(weight_combo_in);
    ui->height_spinbox->setValue(height_spin_in);
    ui->height_combo->setCurrentText(height_combo_in);

}

