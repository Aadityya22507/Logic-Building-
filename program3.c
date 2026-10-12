#include<stdio.h>

int main()
{
    //int i , j , k;

    int iValue1 = 0; 
    int iValue2 = 0;
    int iResult = 0;

    printf("enter your first number:\n");
    scanf("%d",&iValue1);

    printf("enter your second number:\n");
    scanf("%d",&iValue2);

    iResult = iValue1 + iValue2;

    printf("addition os two number:%d\n",iResult);

    return 0;
   

}