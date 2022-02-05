#include<stdio.h>
int sum(int a);
int main(){
    int a;
    printf("\n Enter the value:-");
    scanf("%d",&a);
    printf("\n Sum of 0 to %d is :- %d\n ",a,sum(a));
}

int sum(int a){
    if(a==1 || a==0){
        return 1;
    }
    else{
        return a+(sum (a-1));
    }
}