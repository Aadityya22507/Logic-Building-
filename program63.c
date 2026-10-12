#include<stdio.h>


int sumodddisplay(int iNo1)
{
    int iSum = 0 ,iDigits = 0;

    if(iNo1 <0)
    {
        iNo1 = -iNo1;
    }
    
    while (iNo1 != 0) 
    {
        iDigits = iNo1 % 10;
        if(iDigits %2 == 0)
        {
            iSum = iSum + iDigits;
        }
        iNo1 = iNo1 /10;
    }
    return iSum;
}


int main()
{
    int iValue = 0 , iRet = 0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet = sumodddisplay(iValue);

    printf("sum of even digits:%d\n",iRet);


    return 0;
}