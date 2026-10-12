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

    float Average()
    {
        int i = 0, iSum = 0;
        float fAns = 0.0f;

        for (i = 0; i < iSize; i++)
        {
            iSum = iSum + Arr[i];
        }

        fAns = (float)iSum / (float)iSize;

        return (fAns);
    }
};

int main()
{
    int iLenght = 0, fRet = 0.0f;
    int *ptr = NULL;

    cout << "Enter the number of elements that you want to store:" << endl;
    cin >> iLenght;

    ArrayX aobj(iLenght);

    aobj.Accept();
    aobj.Display();

    fRet = aobj.Average();

    cout << "average is :" << fRet << endl;

    return 0;
}