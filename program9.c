#include<stdio.h>
#include<stdbool.h>
//user is going to input only positive number

//algorithum
/*
     start
         accept one number as no
         divide that number by 3
         if remainder is 0
         divide that number by 5
         if remainder is 0
         then print no is divisible by 3 and 5
         otherwise print no is divisible by 3 and 5
         
     stop 
*/

/////////////////////////////////////////////
//
// function:       CheckDivisible
// description:    used to check the no is divisible by 3 or 5
// input:          integer
// output:         boolany
// author:         aaditya manoj naik
// date:           16/05/2024
//
///////////////////////////////////////////

bool CheckDivisible(unsigned int iNo)
{
    if(((iNo % 3)==0) && ((iNo % 5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("enter your number: \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5 \n",iValue);
    }
    else
    {
        printf("%d is not divisible by either 3 or 5  \n",iValue);
    }


    return 0;
}