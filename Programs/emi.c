#include<stdio.h>
void emic(int p,int tp,int t,int i,int emi,float r);
void main()
{
		int p,tp,t,i,emi;
		float r;
		printf("\n Calculate Flat-rate EMI");
		printf("\n Enter Principal amount:-");
		scanf("%d",&p);
		printf("\n Enter Time period in months 'eg:-12month':-");
		scanf("%d",&t);
		printf("\n Enter rate of intrest:-");
		scanf("%f",&r);
		emic(p,tp,t,i,emi,r);
	}
void emic(int p,int tp,int t,int i,int emi,float r){
	 i=p/100*r;
         tp=p+i;
         emi=tp/12;
         printf("\n Intrest of principal amount %drs is :- %drs\n",p,i);
         printf("\n Total Payble amount is %d\n EMI per month will be %drs\n",tp,emi);
}
