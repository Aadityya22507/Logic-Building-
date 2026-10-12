#include <stdio.h>
#include <stdlib.h>

void Reverse(int Arr[], int iSize)
{
    int iStart = 0, iEnd = 0, Temp = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while (iStart < iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iStart] = Temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int iCount = 0, i = 0;
    int *Brr = NULL;

    printf("Enter you number of elements:\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("enter the elements:\n");

    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Reverse(Brr, iCount);

    printf("Elements after reverse :\n");
    for (i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }

    free(Brr);

    return 0;
}