#pragma once

#define PI 3.14159265358979323846264338327950288419716939937510582
#define EULER 2.71828182845904523536028747135266249775724709369995 

//Maximum terms in the series calculated
#define MAX_ITERATIONS 32

double cml_cos(double theta);
double cml_acos(double x);

double cml_sin(double theta);
double cml_asin(double x);

double cml_ln(double x);
double cml_euler(double x);

double cml_power(double b, double x);
double cml_factorial(double n);