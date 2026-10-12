#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool check(char *str)
{
    bool bFlag = false;
    while (*str != '\0')
    {
        if ((*str == 'w') || (*str == 'W'))
        {
            bFlag = true;
            break;
        }

        str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100];
    bool bRet = false;

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    bRet = check(Arr);

    if (bRet == true)
    {
        printf("w is present in the string\n");
    }
    else
    {
        printf("its not present\n");
    }

    return 0;
}