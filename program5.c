#include<stdio.h>

float addition(float fno1 , float fno2)
{
    float fans = 0.0f;
    fans = fno1 + fno2;
    return fans;
}

int main()
{
    float fValue1 = 0.0f; 
    float fValue2 = 0.0f;
    float fResult = 0.0f;

    printf("enter your first number:\n");
    scanf("%f",&fValue1);

    printf("enter your second number:\n");
    scanf("%f",&fValue2);

    fResult = addition(fValue1 , fValue2);

    printf("addition os two number:%f\n",fResult);

    return 0;

}
