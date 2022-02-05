#include<stdio.h>
int main(){
    int r,c;
    printf("\n Enter rows and columns:-");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter details of array\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("\nEnter value at arr[%d][%d]:-",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n------Array Details------");
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("\nValue at arr[%d][%d]:- %d\n",i,j,arr[i][j]);
           
        }
    }
return 0;
}