#include<stdio.h>
void main()
{
char name[6]={'P','R','A','D','I','P'}; //String Declaration & Initialization
for(int i=0;i<6;i++){
printf("\n Enter charachter is :-%c",name[i]); 
}

name[1]='A'; //Accessing string whith index
printf("\n%s",name);
}