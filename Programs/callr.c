#include<stdio.h>
#include<stdlib.h>
int change();
void main()
{
	system("cls"); //use to clear screen
	int a;
	printf("\nEnter the value of a:-");
	scanf("%d",&a);
	printf("\n Value of a before change:-%d",a);
	printf("\nAddress of variable a in main() function is:- %d",&a);
	change(&a); //Giving address of variable as reference 
	printf("\nValue of a after changed is :- %d",a);
}

int change(int *a) //Call by Value //Copy of variable a is passed
{
	*a=20;
	printf("\nAddress of variable a in main() function is:- %d",a);
}
