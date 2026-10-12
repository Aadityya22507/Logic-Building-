#include <iostream>
using namespace std;

// Approach 3 : using recurssion

void display(int iNo)
{
    static int i = 1;

    if (i <= iNo)
    {
        cout << "*" << endl;
        i++;
        display(iNo);
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