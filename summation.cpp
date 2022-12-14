#include "summation.h"
#include <stdio.h>
#include <math.h>

double summation(double plus, double multiply, int num) {
    long double result = 0.0;
    long double x = 1.0;
    for (int i=0; i<num; i++){
        x = x * multiply + plus;
        result += x;
    }
    return result;
}

double summation2(double a, double multiply, int num) {
    long double result = 0.0;
    for (int i=0; i<num; i++){
        long double x;
        multiply *= multiply;
        x = 1.0/(1.0+a*i) * multiply;
        printf("x=%Lf ", x);
        result += x ;
    }
    return result;
}
