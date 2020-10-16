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
}
