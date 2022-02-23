#include<stdio.h>
int main()
{
  int n,k,t,cnt=0;
  scanf("%d %d",&n,&k);
  //printf("%d %d",n,k);
  for(int i=0;i<n;i++){
    scanf("%d",&t);
    if(t%k==0){
      cnt+=1;
    }
    else
    {
    }
  }
  printf("%d\n",cnt);
return 0;
}