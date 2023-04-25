#include "cml/cmathl.h"
#include <stdio.h>

int main()
{
    //This works right now
    printf("%f\n", cml_cos(PI/100));

    //This doesn't work right now
    printf("%f\n", cml_sin(PI/100));
    return 0;
}