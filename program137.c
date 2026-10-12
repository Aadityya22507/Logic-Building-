#include <stdio.h>
#include <stdlib.h>

int Minmum(int Arr[], int iSize)
{
    int iMin = Arr[0], i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0;
    int *Brr = NULL;

    printf("Enter you number of elements:\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("enter the elements:\n");

    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Mainmum(Brr, iCount);

    printf("Min number is :%d\n", iRet);

    free(Brr);

    return 0;
}