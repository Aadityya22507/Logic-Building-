#include<stdio.h>

int sumdisplay(int iNo)
{
    int iSum = 0 ,iDigits = 0;

    if(iNo <0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0) 
    {
        iDigits = iNo % 10;
        iNo = iNo /10;
        iSum = iSum + iDigits;
    }
    return iSum;
}


int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet = sumdisplay(iValue);

    printf("sum of digits :%d\n",iRet);


    return 0;
}