#include <stdio.h>
#include <stdlib.h>
void check_mrk();
void print_string();
void main()
{
    system("cls");
    int sn, sbjn, i, j;
    printf("=======Student Mark=======");
    printf("\n Enter Number of students:-");
    scanf("%d", &sn);
    printf("\n Enter Number of Subjects:-");
    scanf("%d", &sbjn);
    int stu_details[sn][sbjn];
    //printf("stu_details[%d][%d]",sn,sbjn);
    char subj_de[sbjn][100];
    for (i = 0; i < sbjn; i++)
    {
        printf("\n Enter the subject Name:-");
        scanf("%s", subj_de[i]);
    }

    for (i = 0; i < sn; i++)
    {
        for (j = 0; j < sbjn; j++)
        {
            if (i < sn && j == 0)
            {
                printf("\n Enter Student Roll no:-");
                scanf("%s", &stu_details[i][j]);
            }
            else
            {
                printf("\nStdent marks");
                scanf("%s", &stu_details[i][j]);
            }
        }
    }
    for (int i = 0; i < sn; i++)
    {
        for (int j = 0; i < sbjn; j++)
        {
              printf("Valus are:- %d",stu_details[i][j]);
        }
    }
}