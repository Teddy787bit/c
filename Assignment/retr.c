#include<stdio.h>
#include<stdlib.h>

int main()
{
  system("clear");
  int i,j,k,row;
  printf("Enter how many row:-");
  scanf("%d",&row);
  int cnt=row-1,cntj=row;
  for(int i=row;i>=1;i--){
    cnt+=1;
    cntj++;
    for(int j=1;j>=((row*2)-((2*i)-1));j++,cntj--){
       
        if(j<=cntj){
          printf("  ");
          /*Code*/
        }
        else
        {
          printf("* ");
        }
     }
    printf("\n");
  }
return 0;
}