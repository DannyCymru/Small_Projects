#include "bm_calc.h"
#include <QString>
#include <QDebug>

bm_calc::bm_calc(){

}

double bm_calc::bmi_calc(double weight, double height, QString met_or_imp){
    double bmi;

    if (met_or_imp == "Metric"){
        height = height/100;
    }
    else {
        height = height * 0.0254;
        weight = weight/2.2;
    }

    bmi= weight / (height * height);
    return bmi;
};

double bm_calc::bmr_calc(double weight, double height, double age, QString gender, QString met_or_imp){
    double male_bmr, male_weight, male_height, male_age, female_bmr, female_weight, female_height, female_age;

    if (gender == "Male"){
        male_bmr = 88.362;
        male_weight = 13.397;
        male_height = 4.799;
        male_age = 5.677;

        return bmr(weight, height, age,
                   male_bmr, male_weight, male_height, male_age,
                   met_or_imp);
    }

    else {
        female_bmr = 447.593;
        female_weight = 9.247;
        female_height = 3.098;
        female_age = 4.330;

        return bmr(weight, height, age,
                   female_bmr, female_weight, female_height, female_age,
                   met_or_imp);
    }


};

double bm_calc::bmr(double weight, double height, double age,
           double gb_bmr, double gb_weight, double gb_height,
           double gb_age,QString met_or_imp){
    if (met_or_imp == "Metric"){

        double calculated_bmr = (gb_bmr +
                                (gb_weight*weight) +
                                (gb_height*height) -
                                (gb_age * age));
        return calculated_bmr;
    }

    else{
        height = height/ 0.39;
        weight = weight/2.2;
        double calculated_bmr = (gb_bmr +
                                 (gb_weight*weight) +
                                 (gb_height*height) -
                                 (gb_age * age));
        return calculated_bmr;
    }
}

double bm_calc::kilo_cals(double calc_bmr, double exercise_level){
    double kilo_cal = calc_bmr * exercise_level;
}
