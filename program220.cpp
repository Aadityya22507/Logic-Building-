#include <iostream>
using namespace std;

int Average(int Arr[], int iSize)
{
    int i = 0, iSum = 0;
    float fAns = 0.0f;

    for (i = 0; i < Arr[i]; i++)
    {
        iSum = iSum + Arr[i];
    }

    fAns = (float)iSum / (float)iSize;

    return (fAns);
}

int main()
{
    int iLenght = 0, i = 0;
    float fRet = 0.0f;
    int *ptr = NULL;

    cout << "Enter the number of elements that you want to store:" << endl;
    cin >> iLenght;

    ptr = new int[iLenght];

    cout << "Enter the elements:" << endl;

    for (i = 0; i < iLenght; i++)
    {
        cin >> ptr[i];
    }

    fRet = Average(ptr, iLenght);

    cout << "enter average is :" << fRet << endl;

    delete[] ptr;

    return 0;
}