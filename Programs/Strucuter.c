#include<stdio.h>
struct emp{ 	//Strucuter Declaration
int id;   //Member Declaration
char name[10];
char post[25];
};
void main(){
struct emp e;  // Creating variable of type emp 
printf("\n Enter employee id:-");
scanf("%d",&e.id);  //Accessing member of strucuter emp id
printf("\n Enter employee name:-");
scanf("%s",&e.name); //Accessing member of strucuter emp name
printf("\n Enter employee designation:-");
scanf("%s",&e.post);  //Accessing member of strucuter emp post

printf("\n=====Employee Details======");
printf("\n ID:-%d",e.id);
printf("\n Name:-%s\n Designation :- %s\n",e.name,e.post);
}