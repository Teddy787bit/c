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
	change(a);
	printf("\nValue of a after changed is :- %d",a);
	int *p=&a;
	printf("\nAddress of variable a is:- %d",p);
}
	 

int change(int a)
{
	a=20;
	printf("\nValue of a is changed  :- %d",a);
int *p=&a;
printf("\nAddress of variable a is:- %d",p);
}