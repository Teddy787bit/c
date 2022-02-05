#include<stdio.h>
int main()
{
	int a;
	printf("\n Select any number 1.Red 2.Green 3.Blue:-");

	scanf("%d",&a);
	switch(a){
	case 1:
		printf("\n You have selected red color\n");
		break;
	case 2:
		printf("\n You have selected green color\n");
		break;
	case 3:
		printf("\n You have selected blue color\n");
		break;
	default:
	printf("\n Invalid selection \a \n");
}
}