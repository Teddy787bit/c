
gets();
Works same  scanf(); .In gets(); we dont need to use format specifier i.e %s and  double quote i.e"".
-Only take input of one string.

gets(string_name);

puts();
Works same  printf(); .In prints(); we dont need to use format specifier i.e %s and  double quote i.e"".
-Only gives  output of one string.
-we can not give custom text.

#include<stdio.h>
void main(){
	char name[6];  // String Declaration
	printf("\n Enter name:-");
	gets(name);  //String  Initialization
	prinf("\n Name is:-");
	puts(name);

}
	