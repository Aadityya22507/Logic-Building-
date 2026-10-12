#include<stdio.h>
#include<stdbool.h>

/*
    Start
       accept one number as no
       if the no is greater then 30 and if it is less than 50
       then diplay the message as no is in the range
       otherwise
       display the message as no is not in the range
    STOP
*/

bool CheckRange(int iNo)
{
    if((iNo >= 30)&&(iNo <= 50))
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
    int iValue = 0;
    bool bRet = false;

    printf("enter your number:\n");
    scanf("%d",&iValue);

    bRet = CheckRange(iValue);
    if(bRet ==true)
    {
        printf("%d is in the range 30 and 50\n",iValue);
    }
    else
    {
        printf("%d is no the range 30 and 50\n",iValue);
    }
    

    return 0;
}