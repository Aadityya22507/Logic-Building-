#include <stdio.h>

int display(int iNo)
{
    int iDigit = 0, iSum = 0;

    printf("Binary conversion is :\n");

    while (iNo != 0)
    {
        iDigit = iNo % 2;
        iSum = iSum + iDigit;

        printf("%d", iDigit);
        iNo = iNo / 2;
    }
    printf("\n");
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = display(iValue);

    printf("%d", iRet);

    return 0;
}


/*









*/