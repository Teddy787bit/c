
#include<stdio.h>
void main()
{
	int a=20;
	int *b; //Pointer Declaration
	int **c;
	
	b=&a; //Pointer Initialization
	c=&b;
	printf("\n Address of 'a' variable is :-%d",b);
	printf("\n Address of 'b pointer ' variable is :-%d",c);
}
