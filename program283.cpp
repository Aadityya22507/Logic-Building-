#include <iostream>
using namespace std;

int add(int iNo)
{
    static int iSum = 0;
    static int i = 0;

    if(i <= iNo)
    {
        iSum = iSum + i;
        i++;
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