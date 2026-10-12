#include <stdio.h>
#include <stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{
    return true;
}

int main()
{
    char Arr[100];
    char Brr[100];
    bool bRet = false;

    printf("Enter the First String : \n");
    scanf("%s", &Arr);

    printf("Enter the Second String : \n");
    scanf("%s", &Brr);

    bRet = CheckAnagram(Arr, Brr);

    if (bRet == true)
    {
        printf("String are anagram\n");
    }
    else
    {
        printf("String are not anagram\n");
    }

    return 0;
}