# CML - Custom Math Library
Custom math library written in C for fun.
All of the functions written in the library are written without the use of the standard C math library.

The function in this library are slower than the C standard library's counterparts but that is expected as Maclaurin and Taylor series aren't necessarily
the most efficient. Nevertheless, that doesn't really matter as the whole purpose of this library is to learn how one might implement these fuctions and 
have fun with it.

## Functions - 

### Sine and Cosine -
Both of these functions use Maclaurin series to determine their values. Maximum iterations of the series is determined in the header file and can be changed
to whatever you want. The only problem is that floating point accuracy can get pretty rough as the terms get really really small.
    
