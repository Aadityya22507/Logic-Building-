#include <stdio.h>

void updatestring(char *str)
{
    while (*str != '\0')
    {
        if (*str == ' ')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    updatestring(Arr);

    printf("Updated string is %s\n", Arr);

    return 0;
}