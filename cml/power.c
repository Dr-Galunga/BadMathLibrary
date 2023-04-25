/*------------------------------------------------------------------------------------------------------------------------------------------
    Implements basic power function using recursion. 
------------------------------------------------------------------------------------------------------------------------------------------*/
#include "cmathl.h"

// Takes in a base as the first argument and an exponent as the second argument
double cml_power(double b, double x)
{
    if(x == 0)
    {
        return 1;
    }
    return cml_power(b, x-1) * b;  
}