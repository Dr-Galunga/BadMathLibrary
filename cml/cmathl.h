/*------------------------------------------------------------------------------------------------------------------------------------------
    Function definitions for CML. Also defines some constants such as pi, e, and the max iterations to use for the Taylor and 
    Maclaurin series.
------------------------------------------------------------------------------------------------------------------------------------------*/
#pragma once

#define PI 3.14159265358979323846264338327950288419716939937510582
#define TAU 6.2831853071795864769252867665590057683943387987502116
#define EULER 2.71828182845904523536028747135266249775724709369995 

//Maximum terms in the series calculated
#define MAX_ITERATIONS 64

double cml_cos(double theta);
double cml_acos(double x);

double cml_sin(double theta);
double cml_asin(double x);

double cml_ln(double x);
double cml_euler(double x);

double cml_power(double b, double x);
double cml_factorial(double n);