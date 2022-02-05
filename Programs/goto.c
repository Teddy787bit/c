#include<stdio.h>
#include<stdlib.h>
void main()
{
system("cls");
	int i;
	for(i=0;i<=10;i++){
		if(i==5){
			printf("\n Only 4 number will be printed");
			goto xyz;
		}
	printf("\n%d",i);
	}
xyz:printf("\n Control comes to XYZ statement");
i--;
printf("\n%d",i);
}

