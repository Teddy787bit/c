#include<stdio.h>
#include<stdlib.h>
void emi(int p,float r,int t); //Use this function to find flat-rate of Intrest and EMI
void main(){
system("cls");
	int p,t;
	float r;
	printf("\n Enter the loan amount:-");
	scanf("%d",&p);
	printf("\n Enter flat-rate of interest:-");
	scanf("%f",&r);
	printf("\n Enter duration of loan in terms of months(i.e 12months:-12):-");
	scanf("%d",&t);
	emi(p,r,t);
	//even();
}


void emi(int p,float r,int t)
{
int fp,i,p_emi;
i=p/100*r;
fp=p+i;
printf("\n Final amount to be paid is :-%d",fp);
p_emi=fp/t;
printf("\n Every month EMI will be:- %d for %d Months",p_emi,t);
}

