#include <stdio.h>
#include <stdbool.h>

void CalculateFrequency(char str[])
{
    int Count[26] = {0};
    int i = 0;

    while (*str != '\0')
    {
        Count[*str - 'a']++;
        str++;
    }

    for (i = 0; i < 26; i++)
    {
        if (Count[i] != 0)
        {
            printf("Frequency if %c is %d \n", 'a' + i, Count[i]);
        }
    }
}

int main()
{
    char Arr[100];
    char Brr[100];
    bool bRet = false;

    printf("Enter the First String : \n");
    scanf("%s", &Arr);

    CalculateFrequency(Arr);

    return 0;
}