#include <stdio.h>

void display(int iNo)
{
    int iDigit = 0;

    printf("Binary conversion is :\n");

    while (iNo != 0)
    {
        iDigit = iNo % 2;
        printf("%d", iDigit);
        iNo = iNo / 2;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    display(iValue);

    return 0;
}