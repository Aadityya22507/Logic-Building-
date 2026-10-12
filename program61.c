#include<stdio.h>


int Count(int iNo)
{
    int iCount = 0 ,iDigits = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }
    
    while (iNo !=0 ) 
    {
        iDigits = iNo % 10;
        if(iDigits > 5)
        {
        iCount++;
        }
        
    }
    return iCount;
}


int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet = Count(iValue);

    printf("number of digits greater than 5 are:%d\n",iRet);


    return 0;
}