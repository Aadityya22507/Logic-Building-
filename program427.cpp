#include <iostream>
using namespace std;

template <class T>
T Addition(T iNo1, T iNo2)
{
    T Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    float iValue1 = 10, iValue2 = 11;
    double iRet = 0;

    float fValue1 = 10.78f, fValue2 = 11.07f;
    float fRet = 0.0f;

    double dValue1 = 10.78, dValue2 = 11.07;
    double dRet = 0.0;

    iRet = Addition(iValue1, iValue2);

    cout << "Addition of integers is : " << iRet << "\n";

    fRet = Addition(fValue1, fValue2);

    cout << "Addition of float is : " << fRet << "\n";

    dRet = Addition(dValue1, dValue2);

    cout << "Addition of double is : " << dRet << "\n";

    return 0;
}