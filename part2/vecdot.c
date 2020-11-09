#include "veclib.h"

float dotprod(vector vec_a,vector vec_b){
	    float dot = 0.0;
	        for (int i = 0; i < dim; i++) dot+=vec_a[i]*vec_b[i];
		    return dot;
}

