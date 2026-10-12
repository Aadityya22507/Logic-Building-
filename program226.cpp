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
        cout << "Inside the contstructor" << endl;
        iSize = No;
        Arr = new int[iSize];
    }

    ~ArrayX()
    {
        cout << "Inside the destructor" << endl;
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
};

int main()
{
    int iLenght = 0;

    cout << "Enter the number of elements that you want to store:" << endl;
    cin >> iLenght;

    ArrayX aobj(iLenght);

    aobj.Accept();
    aobj.Display();

    return 0;
}