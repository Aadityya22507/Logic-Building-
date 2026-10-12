#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000100;
    unsigned int iResult = 0;

    printf("Enter the number :\n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        printf("ON");
    }
    else
    {
        printf("OFF");
    }

    return 0;
}