#include<stdio.h>

int main()
{
    //int i , j , k;

    float fValue1 = 0.0f; 
    float fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("enter your first number:\n");
    scanf("%f",&fValue1);

    printf("enter your second number:\n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("addition os two number:%f\n",fResult);

    return 0;

}