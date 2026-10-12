#include <iostream>
using namespace std;

int add(int iNo)
{
    int iSum = 0 , i =1;

    while (i <= iNo)
    {
        iSum = iSum + i;
        i++;
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