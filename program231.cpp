#include <iostream>
using namespace std;

class ArrayX
{
private:
    int *Arr;
    int iSize;

public:
    ArrayX(int No)
    {
        iSize = No;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        delete[] Arr;
    }

    void Accept()
    {
        int i = 0;
        cout << "Enter the elements:" << endl;
        for (i = 0; i < iSize; i++)
        {
            cin >> Arr[i];
        }
    }

    void Display()
    {
        int i = 0;
        cout << "Elements are:" << endl;
        for (i = 0; i < iSize; i++)
        {
            cout << Arr[i] << endl;
        }
    }

    int Calculate(int iNo)
    {
        int iCount = 0;

        while (iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }
        return iCount;
    }

    void Displaydigitcount()
    {
        int i = 0, iRet = 0;

        for (i = 0; i < iSize; i++)
        {
            iRet = Calculate(Arr[i]);
            cout << Arr[i] << " contains " << iRet << " digits in it" << endl;
        }
    }
};

int main()
{
    int iLenght = 0;
    int *ptr = NULL;

    cout << "Enter the number of elements that you want to store:" << endl;
    cin >> iLenght;

    ArrayX *aobj = new ArrayX(iLenght); // dynamic object creation

    aobj->Accept();

    aobj->Displaydigitcount();

    delete aobj;

    return 0;
}