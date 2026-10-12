#include <iostream>
using namespace std;

int add(int iNo)
{
    int iSum = 0;

    while(iNo >= 1)
    {
        iSum = iSum + iNo;
        iNo--;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout << "enter the number:" << endl;
    cin >> iValue;

    iRet = add(iValue);

    cout << "Addition is " << iRet << endl;

    return 0;
}