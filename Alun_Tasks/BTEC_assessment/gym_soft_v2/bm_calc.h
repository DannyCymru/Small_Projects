#ifndef BM_CALC_H
#define BM_CALC_H

#include <math.h>
#include <QString>

class bm_calc{
    public:
        bm_calc();

        double bmi_calc(double weight, double height);
        double bmr_calc(double weight, double height, double age, QString gender);
        double kilo_cals(double bmr, double exercise);
    private:
};
#endif // BM_CALC_H
