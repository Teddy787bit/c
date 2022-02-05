#include<stdio.h>
int main()
{
int n;
printf("\n Enter the number:-");
scanf("%d",&n);
if(n>0)
{
	if(n<=10)
	{
		printf("\n Number is between 0-10");
	}
	else{
		printf("\n Numbre is grater then  10");
	}
}
else
{
	printf("\n Enter Positive Numeber ");
}
return 0;
}