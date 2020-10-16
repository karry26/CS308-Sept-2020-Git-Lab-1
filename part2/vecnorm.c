#include "veclib.h"
#include<math.h>

float norm(vector vec_a,vector vec_b)
{
    float norm1 = 0.0;
    for (int i=0;i<DIM;i++) {
        norm1 = norm1 + (vec_a[i] - vec_b[i]) * (vec_a[i] - vec_b[i]);
    }
    return sqrt(norm1);
}
