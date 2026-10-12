#include <iostream>
using namespace std;

void strcpyX(char *dest, char *src)
{
    while (*src != '\0')
    {
        *dest = *src;

        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "enter the source string :" << endl;
    cin.getline(Arr, 30);

    strcpyX(Brr, Arr);

    cout << "Destination string is :" << Brr << endl;

    return 0;
}