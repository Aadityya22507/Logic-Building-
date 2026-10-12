#include<stdio.h>
#include<stdbool.h>
//user is going to input only positive number

//algorithum
/*
     start
         accept one number as no
         divide that number by 2
         if remainder is 0
         then display the result as  even number
         otherwise display the result as odd number
     stop 
*/

/////////////////////////////////////////////
//
// function:       Checkevenodd
// description:    used to check the no is even or odd
// input:          integer
// output:         boolany
// author:         aaditya manoj naik
// date:           16/05/2024
//
///////////////////////////////////////////
bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2)==0)
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

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is even number \n",iValue);
    }
    else
    {
        printf("%d is odd number \n",iValue);
    }


    return 0;
}