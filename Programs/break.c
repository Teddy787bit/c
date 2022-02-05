#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<=10;i++ ){
		if(i==5){
			printf("\n Only 4 number will be printed");
			break;
		}
	printf("\n%d",i);
	}

printf("\n Break Applied");

}