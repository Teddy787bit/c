#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    int r, c, n, i, j;

    printf("\n Enter the number of students:-");
    scanf("%d", &r);
    printf("\n Enter the number of Subs:-");
    scanf("%d", &c);
   // c++;
   // printf("\n%d",c);
    int sub[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j <  c; j++)
        {
            printf("[%d][%d]", i, j);

            if (i < r && j == 0)
            {
                printf("\n Enter Student Number:-");
                scanf("%d", &sub[i][j]);
            }
            else
            {
                printf("\n Enter Student Marks:-");
                scanf("%d", &sub[i][j]);
            }
        }
    }
    printf("\n 2D array");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("\narray[%d][%d] value = %d", i, j, sub[i][j]);
        }
    }
    return 0;
}
