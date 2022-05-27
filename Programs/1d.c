#include<stdio.h>
#include<stdlib.h>

int main(){
    system("cls");
    int n;
    printf("\n Enter how many students:-");
    scanf("%d",&n);
    int stno[n]; //Array
    for(int i=0;i<n;i++){
        printf("\n Enter student Number:-\n");
        scanf("%d",&stno[i]);
    }
    printf("\n Student Roll Numebers:-");
    for(int i=0;i<n;i++){
        printf("\n[%d]Student Number is :- %d",i,stno[i]);
    }
    printf("\n------------------------\n");
   int in,nv;
    printf("Enter Index use wanted to edit:-\n");
    scanf("%d",&in);
    printf("\n Enter edited value:-\n");
    scanf("%d",&nv);
    stno[in]=nv; // arr_name[index]=value
    printf("\n Student Roll Numebers:-\n");
    for(int i=0;i<n;i++){
        printf("\n[%d]Student Number is :- %d\n",i,stno[i]);
    }
    return 0;
}

