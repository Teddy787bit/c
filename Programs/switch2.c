#include <stdio.h>
int main()
{
    char ch;
    printf("\n Enter alphabet :-");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
  //  break;
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("\n It is vowel");
        break;
    default:
        printf("\n Not an vowel");
        break;
    }
    return 0;
}