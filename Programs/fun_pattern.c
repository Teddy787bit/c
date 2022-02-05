#include<stdio.h>
void patt(char ch);

int main()
{
	int r,c,n;
	char ch;
	printf("\n Enter a charachter for Pattern:-");
	scanf("%c",&ch);
	printf("Enter a Number");
	scanf("%d",&n);
	n--;
	for(r=0;r<=n;r++)
	{
	for(c=0;c<4;c++)
	{
		patt(ch);
		
	}
	printf("\n");
	}
	return 0;
}

void patt(char ch){
	printf("%c\t",ch);
}
