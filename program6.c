#include<stdio.h>


float addition(
                float fno1 ,                 //first input
                float fno2                   //second input
            )
{
    auto float fans = 0.0f;                  //variable to store in result               
    fans = fno1 + fno2;
    return fans;
}


int main()
{
    auto fValue1 = 0.0f;                    //variable to store first input                    
    auto fValue2 = 0.0f;                    //variable to store second input
    auto fResult = 0.0f;                    //variable to store in result value 

    printf("enter your first number:\n");
    scanf("%f",&fValue1);

    printf("enter your second number:\n");
    scanf("%f",&fValue2);

    fResult = addition(fValue1 , fValue2);

    printf("addition os two number:%f\n",fResult);

    return 0;

}
