#include<stdio.h>
#include<stdbool.h>

bool evendisplay(int iNo1)
{
    int iCount = 0 ,iDigits = 0;

    if(iNo1 <0)
    {
        iNo1 = -iNo1;
    }
    
    while (iNo1 != 0) 
    {
        iDigits = iNo1 % 10;
        iNo1 = iNo1 /10;
        if(iDigits % 2 != 0)
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

    iRet = evendisplay(iValue);

    printf("number of odd are:%d\n",iRet);


    return 0;
}