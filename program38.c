#include<stdio.h>
#include<stdbool.h>

//time complexity :0(N/2)

void DislayFactors(int iNo)
{
    int iCnt = 0;
    printf("Factors of %d are:\n",iNo);
    
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt)==0)
        {
         printf("%d\n",iCnt);
        } 
    }
   
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("enter your first number:\n");
    scanf("%d",&iValue);

    DislayFactors(iValue);

    return 0;
}