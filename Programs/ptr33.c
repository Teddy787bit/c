#include<stdio.h>
#include<stdlib.h>
int main(){
    int row;
    printf("Enter how many rows");
    scanf("%d",&row);
    int r=row,n=0;
    for(int i=1; i<=row;i++){
        for(int s=1;s<=r;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf(" %d",++n);
        }
        r--;
        printf("\n");
    }
    return 0;
}