#include <stdio.h>
#include <string.h>

int strlenx(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        iCnt++;
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

    iRet = strlenx(Arr);

    printf("Lenght of string is :%d\n", iRet);

    return 0;
}