#include <stdio.h>

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter the first number :\n");
    scanf("%u", &iNo1);

    printf("Enter the second number :\n");
    scanf("%d", &iNo2);

    iRet = iNo1 ^ iNo2;

    printf("Result of bitwrise & :%u\n", iRet);

    return 0;
}

/*
op1     op2     result
1       1       0
0       0       1
0       0       0
0       1       1

iNo1        11          0   0   0   0   1   0   1   1
iNo2        i5          0   0   0   0   1   1   1   1
------------------------------------------------------
                        0   0   0   0   0   1   0   0   

iNo1        67          0   1   0   0   0   0   1   1
iNo2        34          0   0   1   0   0   0   1   0
------------------------------------------------------
                        0   1   1   0   0   0   0   1
*/