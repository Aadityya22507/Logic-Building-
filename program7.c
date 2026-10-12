#include <stdio.h>

/// ///////////////////////
////  function name: addition
////   description:  it is uesd to preform the addition of two float
///    intput:       float , float
///    output:       float
///    author:       aadityan manoj naik
///    date:         15/04/2024
///
//////////////////////////
float addition(float fno1, float fno2)
{
    auto float fans = 0.0f;
    fans = fno1 + fno2;
    return fans;
}
////////////////////////////
// function:     main
//  description: its entey point function
////////////////

int main()
{
    auto fValue1 = 0.0f;
    auto fValue2 = 0.0f;
    auto fResult = 0.0f;

    printf("enter your first number:\n");
    scanf("%f", &fValue1);

    printf("enter your second number:\n");
    scanf("%f", &fValue2);

    fResult = addition(fValue1, fValue2);

    printf("addition os two number:%f\n", fResult);

    return 0;
}
