#include<stdio.h>
#include<stdlib.h>
int change();
void main()
{
	system("cls");
	int a;
	printf("\nEnter the value of a:-");
	scanf("%d",&a);
	printf("\n Value of a before change:-%d",a);
	printf("\nAddress of variable a is:- %d",&a);
	change(a);
	printf("\nValue of a after changed is :- %d",a);
}
	 

int change(int n)
{
	n=20;
	printf("\nValue of a is changed  :- %d",n);
	printf("\nAddress of variable a is:- %d",&n);
}
