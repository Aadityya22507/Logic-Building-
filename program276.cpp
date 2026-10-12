#include <iostream>
using namespace std;

// Approach 3 : using recurssion

void display(int iNo)
{
    int i = 0;

    while (i <= iNo)
    {
        cout << i << endl;
        i++;
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