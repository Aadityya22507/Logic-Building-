#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while ( iCnt <=iNo )
    {
        printf("om Hum Hanumate Namah\n");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    printf("enter your number:");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}