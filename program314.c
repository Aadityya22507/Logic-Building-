#include <stdio.h>
#include<stdbool.h>

int main()
{
    unsigned int iNo1 = 0;

    printf("Enter the number :\n");
    scanf("%u", &iNo1);

    if(iNo1 & 8 )
    {
        printf("ON");
    }
    else
    {
        printf("OFF");
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