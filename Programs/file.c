#include<stdio.h>
void main()
{
char filename[10],name[10],phno[11];
int i,n;
FILE *f1;
printf("\n Enter file name:-");
scanf("%s",&filename);

//Writing Data
f1=fopen(filename,"w");
printf("\n Enter your name:-");
scanf("%s",&name);
printf("\n Enter your phno:-");
scanf("%s",&phno);
fprintf(f1,"%s %s",name,phno);
fclose(f1);

//Reading Data
f1=fopen(filename,"r");
char nfile[20];
fscanf(f1,"%s",&nfile);
printf("Data from file [%s] is %s ",filename,nfile);
fclose(f1);
}