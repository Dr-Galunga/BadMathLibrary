#include "cml/cmathl.h"
#include <stdio.h>
#include <time.h>

//Basic functions right now but might want to add vector math later on
//Could probably do this pretty easily for some of the easier functions like add or scalar multiplication
//and even normalize but would be really slow with current cos and sin functions

int main()
{

    clock_t start, end;

    start = clock();

    printf("%f\n", cml_cos(PI/20));

    end = clock();

    printf("Execution Time: %f\n", ((double)end - start) / CLOCKS_PER_SEC);

    start = clock();

    printf("%f\n", cml_sin(PI/4));

    end = clock();

    printf("Execution Time: %f\n", ((double)end - start) / CLOCKS_PER_SEC);



    return 0;
}