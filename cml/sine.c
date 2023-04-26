/*------------------------------------------------------------------------------------------------------------------------------------------
    Implements sin using the Macaluarin Series. Won't be very efficient as compared to more practical sine algorithms but is meant 
    for educational purposes. Maximum iterations of the series are defined in the cmathl.h header file.
------------------------------------------------------------------------------------------------------------------------------------------*/
#include "cmathl.h"



double cml_sin(double theta)
{

    theta = restrict_domain(theta);

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
    return 0;
}