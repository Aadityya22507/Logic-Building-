#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00001000;
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
// 0000  0000   0000    0000    0000    0000    0000    0000
//0         0       0       0   1       0       0       0