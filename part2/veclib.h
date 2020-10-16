#include <stdio.h>

#define dim 4
typedef float vector[dim];
//get input vector
void getInput(vector vec_a);
// print vector
void print(vector vec_a);
// add vector
void add(vector vec_a,vector vec_b,vector vec_c);
// element wise product
void eleProd(vector vec_a,vector vec_b,vector vec_c);
//difference vector
void diff(vector vec_a,vector vec_b,vector vec_c);
//dot product
float dotprod(vector vec_a,vector vec_b);
// get angle
float getAngle(vector vec_a,vector vec_b);
// get norm
float norm(vector vec_a,vector vec_b);
