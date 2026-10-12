#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0xffff7fff;
    unsigned int iResult = 0;

    printf("Enter the number :\n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    printf("updated number is %u\n", iResult);

    return 0;
}
// 0000     0000    0000    0000    1000    0000    0000    0000
//