#include<stdio.h>
#include<stdlib.h>

int main()
{
  system("clear");
  int i,j,k,row;
  printf("Enter how many row:-");
  scanf("%d",&row);
  int cnt=row-1,cntj=row;
  for(int i=1;i<=row;i++){
    cnt+=1;
    cntj--;
    for(int j=1;j<=cnt;j++){
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