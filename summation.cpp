#include "summation.h"
#include <stdio.h>
#include <math.h>

double summation(double plus, double multiply, int num) {
    long double result = 1.0;
    for (int i=0; i<num; i++){
        result = result * multiply + plus;
    }
    return result;
}
