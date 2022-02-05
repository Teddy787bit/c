#include<stdio.h>
void main(){
    int k=1,i,j;
    while(k<=10){
        for (i = 0; i <=k; i++)
        {
            for ( j = 0; j <=i; j++)
            {
                printf("%d",&k);

            }
            printf("\n");
        }
        k++;
    }
}
