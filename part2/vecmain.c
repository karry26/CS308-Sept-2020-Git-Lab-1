#include "veclib.h"

void print(vector vec_a) {
	printf("[");
	for (int i=0;i<dim;i++)
		printf("%f ",vec_a[i]);
	printf("]\n");
}
void getInput(vector vec_a){
    printf("enter %d numbers ",dim);
    for (int i=0;i<dim;i++)
        scanf("%f",&vec_a[i]);
}

int main()
{
    vector a,b;
    getInput(a);
    print(a);
    getInput(b);
    print(b);

    vector c;

     add(a,b,c);
     print(c);
     eleProd(a,b,c);
     print(c);
     
     float angle = getAngle(a,b);
     printf("%f is angle between A and B.\n",angle);
    
    float norm_of_vectors = norm(a , b);
    printf("Norm of A and B: %f\n", norm_of_vectors);

    float dot=dotprod(a, b);
    printf("Dot product of A and B: %f\n", dot);
}
