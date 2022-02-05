//Array
#include<stdio.h>
int main(){
    int element[5],i,n,v;//Array Declaration

    for( i=0;i<5;i++) // Array Inilialization
   {
       printf("\nEnter digit:-");
       scanf("%d",&element[i]);
   }
    for(i=0;i<5;i++) // Printing of array elements
    {
        printf("\n Element Location and element value = |%d| |%d| \n",i,element[i]);
    }
    
    //Accessing and upadting new value of array
    printf("\n Enter index to change array elements:-");
    scanf("%d",&n);
    printf("\n Enter the updated value:-");
    scanf("%d",&v);
    element[n]=v;
    
    for(i=0;i<5;i++) // Printing of array elements
    {
        printf("\n Element Location and element value = |%d| |%d| \n",i,element[i]);
    }
    return 0;
}