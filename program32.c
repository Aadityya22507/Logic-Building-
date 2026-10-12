#include<stdio.h>


void Dislay(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
   
}

int main()
{
    int iValue = 0;

    printf("enter your first number:\n");
    scanf("%d",&iValue);

    Dislay(iValue);

    return 0;
}