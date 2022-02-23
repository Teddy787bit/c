#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("clear");
    int stdmar[5], tm = 0,m;
    float per;
    char subj[5][10];
    printf("Enter the Subjects\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%s", &subj[i]);
    }
    for (int j = 0; j < 5; j++)
    {
        do
        {
            printf("Enter marks for %s\n", subj[j]);
            scanf("%d", &m);
            if (m >= 101)
            {
                printf("\nEnter marks out of 100\n");
                continue;
            }
            else
            {
                stdmar[j] = m;
            }

        } while (m > 100);
       
        // scanf("%d", &stdmar[j]);
        tm = tm + stdmar[j];
    }
    for (int j = 0; j < 5; j++)
    {
        printf("Marks for %s is %d\n", subj[j], stdmar[j]);
    }
    per = tm * 100 / 500;
    //printf("Total Mark [%d] percentage {%d}\n", tm, per);
    if (per < 35)
    {
        printf("Fail!!\a\n");
    }
    else
    {
        printf("Passed!! Percentage is :- %d\n Aggregate Mark is %d ", per, tm / 5);
    }

    return 0;
}