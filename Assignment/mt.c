#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int m,mark[5];
    for(int i=0;i<5;i++){
      do
    {
        printf("Enter student marks\n");
        scanf("%d",&m);
        if(m>100){
            printf("\nEnter marks out of 100");
            continue;
        }
        else{
            mark[i]=m;
        }
        
    } while (m>99);
    
    }
    for(int i=0;i<5;i++){
      printf("Marks is [%d]\n",mark[i]);
    }
    

    
    return 0;
}