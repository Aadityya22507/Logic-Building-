#include <iostream>
using namespace std;

void display(int iNo)
{

    while (iNo >= 1)
    {
        cout << iNo << endl;
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    cout << "enter the number:" << endl;
    cin >> iValue;

    display(iValue);

    cout << "End of application" << endl;

    return 0;
}