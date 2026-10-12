#include <iostream>
using namespace std;

int countEven(int Arr[], int iSize)
{
    static int i = 0, iCount = 0;

    if (i <= Arr[i])
    {
        if (Arr[i] % 2 == 0)
        {
            iCount++;
        }

        i++;
        countEven(Arr, iSize);
    }
    return iCount;
}

int main()
{
    int *Arr = NULL;
    int iCount = 0, i = 0, iRet = 0;

    cout << "Enter number of elements :" << endl;
    cin >> iCount;

    Arr = new int[iCount];

    cout << "enter the elements :" << endl;
    for (i = 0; i < iCount; i++)
    {
        cin >> Arr[i];
    }

    iRet = countEven(Arr, iCount);
    cout << "number of even element are :" << iRet << endl;

    delete[] Arr;

    return 0;
}