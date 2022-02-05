#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
void main()
{
	system("cls");
	//clrscr();
	FILE *fp1, *fp2, *fp3;
	int i, no;
	fp1 = fopen("input", "w");
	printf("\n plzz Enter the list and -1 at the end");
	do
	{
		scanf("%d", &no);
		if (no == -1)
		{
			break;
		}
		else
		{
			putw(no, fp1);
		}
	} while (1);
	fclose(fp1);
	fp1 = fopen("input", "r");
	fp2 = fopen("odd", "w");
	fp3 = fopen("even", "w");
	do
	{
		no = getw(fp1);
		if (no == EOF)
		{
			break;
		}
		else
		{
			if (no % 2 == 0)
			{
				putw(no, fp3);
			}
				else
				{
					putw(no, fp2);
				}
			
				
			
		}
	}while (1);
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	fp1 =fopen("odd", "w");
	fp2 = fopen("even", "w");
	printf("\n THE EVEN NUMBER ARE:-");
	do{
		no=getw(fp1);
		if(no==EOF){
			break;
		}
		else{
			no=getw(fp1);
			printf("\n %d",no);
		}
	}while (1);
	fclose(fp1);

	printf("\n THE ODD NUMBER ARE:-");
	do{
		no=getw(fp2);
		if(no==EOF){
			break;
		}
		else{
			no=getw(fp2);
			printf("\n %d",no);
		}
	}while(1);
	fclose(fp2);	
}