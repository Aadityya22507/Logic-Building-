// source : HEllo WorLd
#include <iostream>
using namespace std;

void strcpysmallX(char *dest, char *src)
{
    while (*src != '\0')
    {
        if ((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src;

            dest++;
        }   

        src++;
    }

    *dest = '\0';
}

int main()
{
    char Arr[30];
    char Brr[30];

    cout << "enter the source string :" << endl;
    cin.getline(Arr, 30);

    strcpysmallX(Brr, Arr);

    cout << "Destination string is :" << Brr << endl;

    return 0;
}