#include<stdio.h>

int countdigits(int iNo1)
{
    int iDigits = 0;
    int iCount = 0;

    if(iNo1 <0)
    {
        iNo1 = -iNo1;
    }
    
    while (iNo1 != 0) 
    {
        iDigits = iNo1 % 10;
        iNo1 = iNo1 /10;
        iCount++;
    }

    return iCount;
}


int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet = countdigits(iValue);

    printf("number of digits are:%d\n",iRet);


    return 0;
}