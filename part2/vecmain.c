#include "veclib.h"

void print(vector vec_a) {
	printf("[");
	for (i=0;i<dim;i++)
		printf("%f ",vec_a[i]);
	printf("]");
}
void getInput(vector vec_a){
    printf("enter %d numbers ",dim);
    for (int i=0;i<dim;i++)
        scanf("%f",&vec_a[i]);
}
int main()
{
    vector a;
    getInput(a);
    print(a);
}
