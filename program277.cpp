#include <iostream>
using namespace std;

void display(int iNo)
{
    static int i = 1;

    if(i <= iNo)
    {
        cout << i << endl;
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