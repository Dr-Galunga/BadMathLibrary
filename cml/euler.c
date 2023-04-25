#include "cmathl.h"

//sum: x^n/n!

double cml_euler(double x)
{
    double sum = 0;

    for(int n = 0; n < MAX_ITERATIONS; n++)
    {
        double power = 1;
        double iteration = 0;

        //Determines power
        for(int i = 0; i < n; i++)
        {
            power *= x;
        }

        iteration += power;

        iteration /= cml_factorial(n);

        sum += iteration;
        
    }
    return sum;
}