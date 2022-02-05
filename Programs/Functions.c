//----------Functions------
//Syntax:-
//Function Defination:-
//	function_type  function_name(parameters){
//		//Code
//	}

//Function Declaration/prototyping:-
//	function_type  function_name();

//Function Call:-
//	function_name();

//==========EG==============
#include<stdio.h>
int add(); //Function Declaration/prototyping
int main()
{
	int a,b,c;
	printf("\n Enter 2 number:-");
	scanf("%d",&a);
	scanf("%d",&b);
	  //Function Calling
	c=add(a,b);
	printf("\n Addition of 2 number is:- %d",c);
	return 0;
}

//Function Defination:-
int add(int a,int b)
{
	int c=a+b;
	return c;
}