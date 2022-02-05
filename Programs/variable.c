#include<stdio.h>
int main()
{
	int num;  //Declaration & ini
	char c='P';
	float f;
	printf("Enter the Charachter:-");
	scanf("%c",&c);

	printf("\n Enter the number:-");
	scanf("%d",&num);

	printf("\n Enter the float number:-");
	scanf("%f",&f);

	printf("\nNumber is :- %d",num);
	printf("\nCharacter is :- %c",c);
	printf("\nFloat is :-  %f",f);
	return 0;
}