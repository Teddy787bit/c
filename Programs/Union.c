/*
union [union-tag]
{
datatype variable declaration;
datatype variable declaration;
}variable1,variable2;*/

#include<stdio.h>
#include<stdlib.h>
union emp{
int id;
char name[10];
}e,e1,e2;
int main()
{
system("cls");
printf("\n Enter employee id:-\n");
scanf("%d",&e1.id);
printf("\n Enter employee name:-\n");
scanf("%s",&e1.name);

printf("-------\n Employee Details-------");
printf("\n ID :- %d \nName:- %s",e1.id,e1.name);
return 0;
}