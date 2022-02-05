#include<stdio.h>
struct emp{ 	//Strucuter Declaration
int id;   //Member Declaration
char name[10];
char post[25];
};
void main(){
struct emp e[10];  // Creating variable of type emp      
for(int i=0;i<10;i++){
printf("\n Enter employee id:-");
scanf("%d",&e[i].id);  //Accessing member of strucuter emp id
printf("\n Enter employee name:-");
scanf("%s",&e[i].name); //Accessing member of strucuter emp name
printf("\n Enter employee designation:-");
scanf("%s",&e[i].post);  //Accessing member of strucuter emp post
}

printf("\n=====Employee Details======");
for(int i=0;i<10;i++){
printf("\n ID:-%d",e[i].id);
printf("\n Name:-%s\n Designation :- %s",e[i].name,e[i].post);
}
}
