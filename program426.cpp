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
    double iValue1 = 10.78, iValue2 = 11.07;
    double iRet = 0.0;

    iRet = Addition(iValue1, iValue2);

    cout << "Addition is: " << iRet << "\n";

    return 0;
}