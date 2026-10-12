#include <stdio.h>
#include <stdbool.h>

bool check(char *str, char ch)
{
    int iCnt = 1;
    bool bFlag = false;
    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }
    if (bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character that you want to search:\n");
    scanf(" %c", &cValue);

    iRet = check(Arr, cValue);

    if (iRet != -1)
    {
        printf("letter occurs at the position %d\n", iRet);
    }
    else
    {
        printf("ther is no such letter\n");
    }

    return 0;
}
