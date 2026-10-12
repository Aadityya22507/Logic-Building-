#include <iostream>
using namespace std;

void display(int iNo)
{
    int iDigit = 0;

    while(iDigit != 0)
    {
        iDigit = iNo % 10;
        cout << iDigit << endl;
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "enter the number:" << endl;
    cin >> iValue;

    display(iValue);

    return 0;
}