#include <iostream>
using namespace std;

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

    cout << "Enter the number of element of : \n";
    cin >> iLength;

    ptr = new int[iLength];

    cout << "Enter the element : \n";
    for (i = 0; i < iLength; i++)
    {
        cin >> ptr[i];
    }

    cout << "Entered number are : \n";
    for (i = 0; i < iLength; i++)
    {
        cout << ptr[i] << "\n";
    }

    return 0;
}