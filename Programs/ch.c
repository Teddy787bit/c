#include<stdio.h>
int change();
void main()
{
    char c;
    printf("\n Enter the charachter:-");
    scanf("%c",&c);
    change(&c);
    printf("\n After the change charachter is:-%c",c);
}
int change(char *c){
  printf("\n Enter the new charachter:-");
   scanf("%c",&c);   
return 0;
}