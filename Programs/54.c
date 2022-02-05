#include<stdio.h>
int main(){
    int i=3;
    int *j,**k;
    j=&i;
    k=&j;
    printf("\n %u %u %d \n",k,*k,**k);
    return 0;
}