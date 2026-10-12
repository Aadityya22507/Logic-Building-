#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cVlaue;
    bool bRet = false;

    printf("Enter one Character : \n");
    scanf("%c", &cVlaue);

    bRet = CheckCapital(cVlaue);

    if (bRet == true)
    {
        printf("It is a uppercase\n");
    }
    else
    {
        printf("It is a not uppercase\n");
    }

    return 0;
}