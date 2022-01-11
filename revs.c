#include<stdio.h>
void main(){
    system("clear");
    int i,j;
    for ( i = 4; i >=0; i--)
    {
        printf("\n");
        for ( j = 0; j <i; j++)
        {
            printf("*");
        }
    }
}