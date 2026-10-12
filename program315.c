#include <stdio.h>
#include <stdbool.h>

bool check(int iNo)
{
    unsigned int iMask = 8;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iNo1 = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%u", &iNo1);

    bRet = check(iNo1);

    if(bRet == true)
    {
        printf("ON\n");
    }
    else
    {
        printf("OFF\n");
    }

    return 0;
}
/*
        OP1     op2     &       |       ^

        1       1       1       1       0
        1       0       0       1       1
        0       1       0       1       1
        0       0       0       0       0



*/