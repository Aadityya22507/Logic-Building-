#include <iostream>
using namespace std;

void display(int iNo)
{
    int i = iNo;

    while (i >= 1)
    {
        cout << i << endl;
        i--;
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