#include <stdio.h>
#include <string.h>

int strlencapx(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 65) && (*str <= 90))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    iRet = strlencapx(Arr);

    printf("Number os capital letters are :%d\n", iRet);

    return 0;
}