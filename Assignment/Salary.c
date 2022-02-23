#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int gs,sal,per;
    printf("Enter Ramesh's Salary \n");
    scanf("%d",&sal);
    per=sal/100*20;
    //printf("%d",per);
    gs = sal - per*3;
    printf("Basic Salary is         :- %d\n",sal);
    printf("Dearness Allowance is   :- %d\n",per*2);
    printf("Rent Allowance is       :- %d\n",per);
    printf("Gross Salary is         :- %d\n",gs);

    return 0;
}