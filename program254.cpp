#include <iostream>
using namespace std;

void strcatX(char *dest, char *src)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while (*src != '\0')
    {
        
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30] = "Hello ";

    cout << "enter the source string :" << endl;
    cin.getline(Arr, 30);

    strcatX(Brr, Arr);

    cout << "Destination string is :" << Brr << endl;

    return 0;
}