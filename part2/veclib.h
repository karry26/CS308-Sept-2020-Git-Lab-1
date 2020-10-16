#include <stdio.h>

#define dim 4
typedef float vector[dim];

void getInput(vector vec_a);
void print(vector vec_a);
float * add(vector vec_a,vector vec_b);
float * eleProd(vector vec_a,vector vec_b);
float * diff(vector vec_a,vector vec_b);
float dotprod(vector vec_a,vector vec_b);
float getAngle(vector vec_a,vector vec_b);
