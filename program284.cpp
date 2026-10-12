#include <iostream>
using namespace std;

int add(int iNo)
{
    static int iSum = 0;

    if(iNo >= 1)
    {
        iSum = iSum + iNo;
        iNo--;
        add(iNo);
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