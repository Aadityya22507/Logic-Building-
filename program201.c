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
int addition(int ino1, int ino2)
{
    int ians = 0;
    ians = ino1 + ino2;
    return ians;
}
////////////////////////////
// function:     main
//  description: its entey point function
////////////////

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iResult = 0;

    printf("enter your first number:\n");
    scanf("%d", &iValue1);

    printf("enter your second number:\n");
    scanf("%d", &iValue2);

    iResult = addition(iValue1, iValue2);

    printf("addition os two number:%f\n", iResult);

    return 0;
}
