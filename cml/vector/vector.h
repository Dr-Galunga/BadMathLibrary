#pragma once

typedef enum CML_TYPE
{
    CML_UNDEFINED,
    CML_INT,
    CML_FLOAT,
    CML_DOUBLE
}CML_TYPE;

//Should be generic so it could use any data type
typedef struct vec2
{
    CML_TYPE d_type;
    void* x;
    void* y;
}vec2;