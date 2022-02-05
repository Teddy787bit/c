/*

String Declaration:-
char string_name[length];
char name[6];

String Initialization:-
string_name[length]="String Value";
name[6]="Pradip";

Assigning Value:-
string_name[length]="String";

Using scanf
scanf("%s",String_name);

Eg:-
*/
#include<stdio.h>
void main(){
	char name[300];  // String Declaration
	printf("\n Enter name:-\n");
	scanf("%s",name);  //String  Initialization
	printf("Name is :- %s\n",name);
}
/*
Enter name:-
Pradip
Name is :- Pradip
*/