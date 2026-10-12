#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    int iNo = 0;
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("%d\t",iCnt);    
    }
}

int main()
{
    int iValue = 0;

    printf("enter your number\n");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}