#include "cml/cmathl.h"
#include <stdio.h>
#include <time.h>

//Basic functions right now but might want to add vector math later on
//Could probably do this pretty easily for some of the easier functions like add or scalar multiplication
//and even normalize but would be really slow with current cos and sin functions

//Maybe add graphing

//Still need to do ln and log 

int main()
{

    printf("%f\n", cml_cos(PI/20));
    printf("%f\n", cml_sin(PI/200));

    return 0;
}