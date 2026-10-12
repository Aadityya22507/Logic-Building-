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

    int sumdigit(int iNo)
    {
        int iSum = 0;

        while (iNo != 0)
        {
            iSum = iSum + (iNo % 10);
            iNo = iNo / 10;
        }
        return iSum;
    }

    void Displaydigitsum()
    {
        int i = 0, iRet = 0;

        for (i = 0; i < iSize; i++)
        {
            iRet = sumdigit(Arr[i]);
            cout << "Sum of digits " << Arr[i] << " is " << iRet << endl;
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

    aobj->Displaydigitsum();

    delete aobj;

    return 0;
}