/*------------------------------------------------------------------------------------------------------------------------------------------
    Implements cosine using the Macaluarin Series. Won't be very efficient as compared to more practical cosine algorithms but is meant 
    for educational purposes. Maximum iterations of the series are defined in the cmathl.h header file.
------------------------------------------------------------------------------------------------------------------------------------------*/

#include "cmathl.h"
#include <stdio.h>

double cml_cos(double theta)
{
    double sum = 0;

    for(int n = 0; n <= MAX_ITERATIONS; n++)
    {
        double iteration = 0;
        double power = 1;
        double coefficient = 1;

        for(int i = 0; i < 2 * n; i++)
        {
            power *= theta;
        }

        iteration += power;

        //This doesn't work as intended (need to account for edge case of n = 0)
        //Also doesn't flip the negative sign when it should
        if(n == 0)
        {
            coefficient = 1;
            iteration *= coefficient;
        } else
        {
            for(int i = 0; i < n; i++)
            {
                coefficient *= -1;
            }

            iteration *= coefficient;
        }

        //Now need to divied by factorial
        iteration += factorial(n);

        printf("%f\n", iteration);


        //Adds the current term to the running sum
        sum += iteration;
    }



    return sum;
}