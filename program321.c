#include <stdio.h>
#include <stdbool.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 288;
    unsigned int iResult = 0;

    printf("Enter the number :\n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    if (iResult == iMask)
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

decimal     binary      hexadecimal
-------------------------------------
0           0000            0
1           0001            1
2           0010            2
3           0011            3
4           0100            4
5           0101            5
6           0110            6
7           0111            7
8           1000            8
9           1001            9
10          1010            a
11          1011            b
12          1100            c
13          1101            d
14          1110            e
15          1111            f
--------------------------------

int no = 12;

*/