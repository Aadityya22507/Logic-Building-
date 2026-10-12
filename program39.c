/*
    accept number as no
    search all its factors
    perform addition of all the factor
    if addition is same as no
    then display as no is perfect number
    otherwise display as no is not a perfect number
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
        if(iSum == iNo)
        {
            return true;
        }
        else
        {    
            return false;
        }
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("enter your number:\n");
    scanf("%d",&iValue);

    bRet = CheckPerfect(iValue);
    if(bRet == true)
    {
        printf("%d is perfect number.\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number.\n",iValue);
    }


    return 0;
}