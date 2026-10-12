#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        printf("It is a uppercase\n");
    }
    else
    {
        printf("It is not a uppercase\n");
    }
}

int main()
{
    char cVlaue;
    bool bRet = false;

    printf("Enter one Character : \n");
    scanf("%c", &cVlaue);

    CheckCapital(cVlaue);

    return 0;
}