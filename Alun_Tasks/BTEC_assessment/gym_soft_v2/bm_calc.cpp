#include "bm_calc.h"
#include <QString>

bm_calc::bm_calc(){

}

double bm_calc::bmi_calc(double weight, double height){

    double bmi;

    //If CM is used we need to convert the CM value to meters.
    height = height/100;

    bmi= weight / (height * height);
    return bmi;
};

double bm_calc::bmr_calc(double weight, double height, double age, QString gender){
    double gender_bmr, gender_weight, gender_height, gender_age;
    double bmr;
    if (gender == "Male"){
        gender_bmr = 88.362;
        gender_weight = 13.397;
        gender_height = 4.799;
        gender_age = 5.677;

    }
    else if (gender == "female") {
        gender_bmr = 447.593;
        gender_weight = 9.247;
        gender_height = 3.098;
        gender_age = 4.330;
    }

    bmr = (gender_bmr + (gender_weight*weight)+(gender_height*height) - (gender_age * age));
    return bmr;
};

double bm_calc::kilo_cals(double bmr, double exercise){

};
