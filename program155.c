#include <stdio.h>
#include <stdbool.h>

bool Checklowercase(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("It is a lowercase\n");
    }
    else
    {
        printf("It is not a lowercase\n");
    }
}

int main()
{
    char cVlaue;
    bool bRet = false;

    printf("Enter one Character : \n");
    scanf("%c", &cVlaue);

    Checklowercase(cVlaue);

    return 0;
}