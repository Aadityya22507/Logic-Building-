#include <stdio.h>

void updatestring(char *str)
{

    while (*str != '\0')
    {

        str++;
    }
}

int main()
{
    char Arr[100];

    printf("Enter string :\n");
    scanf("%[^'\n']s", Arr);

    updatestring(Arr);

    printf("Updtaed string is %s\n", Arr);

    return 0;
}