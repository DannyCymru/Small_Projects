#ifndef BM_CALC_H
#define BM_CALC_H

#include <math.h>

class bm_calc{
    public:
        bm_calc();
    private:
        double bmi_calc(double weight, double height);
        double bmr_calc(double weight, double height, double age);
        double kilo_cals(double bmr, double exercise);
};
#endif // BM_CALC_H
