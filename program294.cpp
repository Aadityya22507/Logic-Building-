#include <iostream>
using namespace std;

int display(int iNo)
{
    static int iSum = 0;

    if (iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        display(iNo / 10);
    }
    return iSum;
}

int display(int iNo)
{
    static int iSum = 0;

    if (iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        display(iNo / 10);
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "enter the number:" << endl;
    cin >> iValue;

    iRet = display(iValue);

    cout << "the number are " << iRet << endl;

    return 0;
}