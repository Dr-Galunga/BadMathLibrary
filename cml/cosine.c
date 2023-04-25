/*------------------------------------------------------------------------------------------------------------------------------------------
    Implements cosine using the Macaluarin Series. Won't be very efficient as compared to more practical cosine algorithms but is meant 
    for educational purposes. Maximum iterations of the series are defined in the cmathl.h header file.
------------------------------------------------------------------------------------------------------------------------------------------*/

#include "cmathl.h"
#include <stdio.h>

//I believe this works right now

double cml_cos(double theta)
{
    double sum = 0;

    for(int n = 0; n <= MAX_ITERATIONS; n++)
    {
        double iteration = 0;
        double power = 1;
        double coefficient = 1;

        //Might want to change this to the recursive power() function defined in power.c
        //Calculate the x^n part of the term
        for(int i = 0; i < 2 * n; i++)
        {
            power *= theta;
        }

        iteration += power;

        //Calculate what sign the 1 should have
        for(int i = 0; i < n; i++)
        {
            coefficient *= -1;
        }

        iteration *= coefficient;

        //Now need to divied by factorial
        //Something wrong with the compilation of the factorial right now
        //Also didn't implement factorial yet so might be a problem
        iteration /= cml_factorial(2 * n);

        //Adds the current term to the running sum
        sum += iteration;
    }

    return sum;
}