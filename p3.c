#include <stdio.h>
void main()
{
    int i, j, k = 1,n;
    printf("\n Enter the number:-");
    scanf("%d",&n);
        for (i = 1; i <= 100; i++)
        {
            for (j = 1; j <= i; j++,k++)
            {
                if(k<=n){
                        printf("%d\t", k);
                }
                else{
                    printf("\n");
                   return;
                }
            }
            printf("\n");
        }  
}