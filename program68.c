#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1;iCnt <= iNo;iCnt++)
    {
        printf("*\t");    
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter you number\n");
    scanf("%d\n",&iValue);

    Display(iValue);

    return 0;
}