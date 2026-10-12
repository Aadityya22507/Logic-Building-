#include <iostream>
using namespace std;

int main()
{
    int iLenght = 0, i = 0, iRet = 0;
    int *ptr = NULL;

    cout << "Enter the number of elements that you want to store:" << endl;
    cin >> iLenght;

    ptr = new int[iLenght];

    cout << "Enter the elements:" << endl;

    for (i = 0; i < iLenght; i++)
    {
        cin >> ptr[i];
    }

    cout << "Enter the elements are:" << endl;

    for (i = 0; i < iLenght; i++)
    {
        cout << ptr[i] << endl;
    }

    delete[] ptr;

    return 0;
}