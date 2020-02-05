#include "bm_calc.h"

double bmi_calc(double weight, double height){

    double bmi;
    bmi= weight / (height * height);
    return bmi;
};

/*double bmr_calc(double weight, double height, double age){

};

double kilo_cals(double bmr, double exercise){

};*/
