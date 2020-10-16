#include "veclib.h"
#include <math.h>

float getAngle(vector vec_a,vector vec_b)
{	
	float prod=0;
	float magA=0;
	float magB=0;
	float angle;
	
	for(int i=0;i<4;i++){
		prod+=(vec_a[i]*vec_b[i]);
		magA+=(vec_a[i]*vec_a[i]);
		magB+=(vec_b[i]*vec_b[i]);
	}
	
	magA= sqrt(magA);
	magB= sqrt(magB);
	
	angle = acos(prod/(magA*magB));	
	return angle;
}
