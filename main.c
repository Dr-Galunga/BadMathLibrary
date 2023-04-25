#include "cml/cmathl.h"
#include <stdio.h>

//Basic functions right now but might want to add vector math later on
//Could probably do this pretty easily for some of the easier functions like add or scalar multiplication
//and even normalize but would be really slow with current cos and sin functions

int main()
{
    //This works right now
    printf("%f\n", cml_cos(PI/100));

    //This doesn't work right now
    printf("%f\n", cml_sin(PI/100));
    return 0;
}