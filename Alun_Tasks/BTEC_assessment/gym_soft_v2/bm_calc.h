#ifndef BM_CALC_H
#define BM_CALC_H

#include <math.h>
#include <QString>

class bm_calc{
    public:
        bm_calc();

        double bmi_calc(double weight, double height, QString met_or_imp);
        double bmr_switch(double weight, double height, double age, QString gender, QString met_or_imp);
        double kilo_cals(double bmr, double exercise_level);
        double bmr_calc(double weight, double height, double age, double gb_bmr, double gb_weight, double gb_height, double gb_age,QString met_or_imp);

    private:
};
#endif // BM_CALC_H
