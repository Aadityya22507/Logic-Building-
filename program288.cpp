#include <iostream>
using namespace std;

int display(int iNo)
{
    static int iCnt = 0;

    if(iNo != 0)
    {
        iCnt++;
        iNo = iNo / 10;
        display(iNo);
    }
    return iCnt;
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