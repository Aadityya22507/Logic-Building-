#include <iostream>
using namespace std;

class ArrayX
{
public:
    int *Arr;
    int iSize;

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
};

int main()
{
    int iLenght = 0;

    cout << "Enter the number of elements that you want to store:" << endl;
    cin >> iLenght;

    ArrayX aobj(iLenght);

    return 0;
}