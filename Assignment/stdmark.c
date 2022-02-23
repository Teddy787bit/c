#include<stdio.h>
#include<stdlib.h>
int main()
{
    system("clear");
    int stdmar[6];
    char subj[6][10];
    printf("Enter the Subjects\n");
    for(int i=0;i<6;i++){
        scanf("%s",&subj[i]);
    }
    for(int j=0;j<6;j++){
        printf("Enter marks for %s\n",subj[j]);
        scanf("%d",&stdmar[j]);
    }
     for(int j=0;j<6;j++){
        printf("Marks for %s is %d\n",subj[j],);
       
    }
    
    return 0;
}