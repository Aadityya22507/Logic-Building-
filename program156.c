#include <stdio.h>
#include <stdbool.h>

bool Checkdigit(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        printf("It is a digit\n");
    }
    else
    {
        printf("It is not a digit\n");
    }
}

int main()
{
    char cVlaue;
    bool bRet = false;

    printf("Enter one Character : \n");
    scanf("%c", &cVlaue);

    Checkdigit(cVlaue);

    return 0;
}