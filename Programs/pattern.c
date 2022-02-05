#include<stdio.h>
int main()
{
	int r,c,n;
	printf("Enter a Number");
	scanf("%d",&n);
	for(r=0;r<=n;r++)
	{
	{
	goto stop;
	printf("Go To Row Number 3");
	stop:
	printf("program end here");
	}

	for(c=0;c<4;c++)
	{
	printf("*");
	}
	printf("\n");
	}
	return 0;
}