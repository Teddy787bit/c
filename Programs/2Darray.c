#include<stdio.h>
#include<stdlib.h>
int array();
int main(){
    system("cls");
int c,r,i,j;
printf("\n Enter the row:-");
scanf("%d",&r);
printf("\n Enter the column:-");
scanf("%d",&c);
//int sub[r][c];
array(r,c);
    return 0;
}

int array(int r,int c){
    int sub[r][c],i,j;
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        if(sub[i]<r && sub[j]==0)
        {
            printf("\n Enter Student Number:-");
            scanf("%d",&sub[i][j]);
        }
        else{
            printf("\n Enter Student Marks:-");
            scanf("%d",&sub[i][j]);
        }
        
    }
}
printf("\n 2D array");
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("array[%d][%d] value = %d",i,j,sub[i][j]);
    }
}
return 0;
}