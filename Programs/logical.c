#include<stdio.h>
int main(){
//Logical Operaters
	int a,b;
	printf("\n Enter the two number:-");
	scanf("%d%d",&a,&b);
	if(a==0 && b==0){
		printf("\n Both are equal to 0");
	}
	if(a==0 || b==0){
		printf("\n Only one of them is equal to 0");
	}
	if(!(a==0)){
		printf("\n this should print if a is equal to zero but will get print due to \"!\" operator  a=%d",a);
	}
printf("\nexpression (a==0) %d",a==0);
printf("\nexpression (!(a==0)) %d",!(a==0));
return 0;
}