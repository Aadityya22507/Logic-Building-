#include <stdio.h>

int power(int iNo1, int iNo2)
{
    int iMult = 1;

    while (iNo2 > 0)
    {
        iMult = iMult * iNo1;
        iNo2--;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number:\n");
    scanf("%d", &iValue1);

    printf("Enter thr second number:\n");
    scanf("%d", &iValue2);

    iRet = power(iValue1, iValue2);

    printf("Answer is :%d\n", iRet);

    return 0;
}