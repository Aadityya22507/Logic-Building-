#include<iostream>
using namespace std;

int Addition(int iNo1 , int iNo2)
{
    int Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{
    int iValue1 = 10, iValue2 = 11;
    int iRet = 0;

    iRet = Addition(iValue1, iValue2);

    cout << "Addition is: " << iRet << "\n";

    return 0;
}