#include<stdio.h>
#include<stdlib.h>

int main(){
system("cls");
int size,i;
printf("\n Enter the size of  array");
scanf("%d",&size);
int arra[size];
for(i=0;i<size;i++){
printf("\n Enter value of arra[%d]:-",i);
scanf(" %d",&arra[i]);
}
printf("\n 2D array");
for(i=0;i<size;i++){
printf("\n %d",arra[i]);
}
return 0;
}
