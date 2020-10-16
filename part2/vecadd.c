#include "veclib.h"
void add (vector vec_a,vector vec_b,vector vec_c)
{
    for (int i=0;i<dim;i++) {
        vec_c[i] = vec_a[i] + vec_b[i];
    }
}