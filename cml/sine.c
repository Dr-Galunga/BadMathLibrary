#include "cmathl.h"
#include <stdio.h>

double cml_sin(double theta)
{

    double sum = 0;

    for(int n = 0; n < MAX_ITERATIONS; n++)
    {
        double iteration = 0;
        double power = 1;
        double coefficient = 1;

        for(int i = 0; i < (2 * n) + 1; i++)
        {
            power *= theta;
        }

        iteration += power;

        for(int i = 0; i < n; i++)
        {
            coefficient *= -1;
        }

        iteration *= coefficient;

        int a = (2 * n) + 1;

        iteration /= cml_factorial(a);

        sum += iteration;
    }
    return sum;
}

// Arcsin function
double cml_asin(double x)
{

}