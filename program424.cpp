#include <iostream>
using namespace std;

float Addition(float iNo1, float iNo2)
{
    float Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    float iValue1 = 10.78f, iValue2 = 11.07f;
    float iRet = 0.0f;

    iRet = Addition(iValue1, iValue2);

    cout << "Addition is: " << iRet << "\n";

    return 0;
}