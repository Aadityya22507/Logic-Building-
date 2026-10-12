#include <stdio.h>

void Swap(int *p, int *q)
{
    int temp = 0;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int A, B = 0;

    printf("Enter first number :\n");
    scanf("%d", &A);

    printf("Enter first number :\n");
    scanf("%d", &B);

    Swap(&A, &B);

    printf("Value of A after Swappind : %d\n", A);
    printf("Value of B after Swappind : %d\n", B);

    return 0;
}