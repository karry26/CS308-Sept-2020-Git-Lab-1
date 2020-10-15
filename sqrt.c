/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
bool isnum(char *num)
{
    int i=0;
    while(num[i]!='\0')
    {
        if(i==0)
        {
            if(num[i]!='-' && (num[i]<'0' || num[i]>'9'))return false;
        }
        else if((num[i]<'0' || num[i]>'9')) return false;
        i++;
    }
    return true;
}
//program to get sqrt of number
int main(int argc, char* argv[]) {

	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	if(!isnum(argv[1]))
    {
        printf("please enter a valid number\n");
        return 0;
    }

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("end of program. Existing");
	return(0);

} // end main
