#include<stdio.h>
int main()
{
int len,i;
printf("\n Enter length of number:-");
scanf("%d",&len);
int num[len]; 
for(i=0;i<len;i++)
{
printf("\n Enter numebr:-");
scanf("%d",&num[i]);
}
for(i=0;i<len;i++)
{
if(i==1|| i==2){
continue;
}
printf("\n Numebr is :- %d",num[i]);
}

return 0;
}