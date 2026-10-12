#include <stdio.h>
#include <string.h>

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    iRet = strlen(Arr); // inbuilt function

    printf("String lengthsis : %d", iRet);

    return 0;
}