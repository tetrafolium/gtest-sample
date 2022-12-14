#include "summation.h"
#include <stdio.h>
#include <math.h>

double summation(double plus, double multiply, int num) {
    long double result = 0.0;

    // if (plus == 0) {
    //     for (int i=0; i<num; i++){
    //         result += pow(multiply, num);
    //     }
    // }

    long double x = 1.0;
    for (int i=0; i<num; i++){
        x = x * multiply + plus;
        result += x;
    }
    return result;
}
