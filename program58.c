#include<stdio.h>
#include<stdbool.h>

void odddisplay(int iNo1)
{
    int iCount = 0 ,iDigits = 0;

    if(iNo1 <0)
    {
        iNo1 = -iNo1;
    }
    
    while (iNo1 > 0) 
    {
        iDigits = iNo1 % 10;
        iNo1 = iNo1 /10;
        if(iDigits % 2 == 0)
        {
            printf("%d\n",iDigits);
        }
        
    }
}


int main()
{
    int iValue = 0 ;

    printf("enter number:\n");
    scanf("%d",&iValue);

    evendisplay(iValue);

    return 0;
}