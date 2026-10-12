#include <iostream>
using namespace std;

int factor(int iNo)
{
    int i = 0;

    for (i = 1; i<=iNo/2 ; i++)
    {
        if(iNo % i == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "enter the number:" << endl;
    cin >> iValue;

    iRet = factor(iValue);

    cout << "the number are " << iRet << endl;

    return 0;
}