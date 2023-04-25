/*------------------------------------------------------------------------------------------------------------------------------------------
    Implements a basic factorial function using recursion. Probably not the most efficient but will help with the Sine and Cosine
    functions in cosine.c and sine.c
------------------------------------------------------------------------------------------------------------------------------------------*/
#include "cmathl.h"

double cml_factorial(double n)
{
    if(n == 0)
    {
        return 1;
    }
    return cml_factorial(n-1) * n;
}