#include <iostream>
using namespace std;

double Addition(double iNo1, double iNo2)
{
    double Ans;
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