#include "summation.h"
#include <stdio.h>
#include <math.h>

double summation(double plus, double multiply, int num) {
    double base = 1.0;
    long double result = 0.0;
    for (int i=0; i<num; i++){
        if (i==0) {
            result += base;
        } else {
            result += pow(multiply, i) + plus;
        }
    }
    return result;
}
