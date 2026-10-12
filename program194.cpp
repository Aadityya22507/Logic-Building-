// approach 2

#include <iostream>
using namespace std;

int addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;

    cout << "enter first number:" << endl;
    cin >> iValue1;

    cout << "enter second number:" << endl;
    cin >> iValue2;

    iRet = addition(iValue1, iValue2);

    cout << "Addition is :" << iRet << endl;

    return 0;
}