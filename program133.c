#include <stdio.h>
#include <stdlib.h>

int Search(int Arr[], int iSize, int iNo)
{
    int i = 0, iFrequency = 0;
    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iCount = 0, i = 0, iRet = 0, j = 0;
    int *Brr = NULL;

    printf("Enter number of elements that you want : \n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements:\n");

    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("enter the number which you want:\n");
    scanf("%d", &j);

    iRet = Search(Brr, iCount, j);

    printf("divisible by 5 nad 3 number is :%d", iRet);

    free(Brr);

    return 0;
}