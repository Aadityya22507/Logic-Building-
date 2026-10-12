#include <iostream>
using namespace std;

// Approach 3 : using recurssion

void display()
{
    static int i = 1;

    if (i <= 4)
    {
        cout << "*" << endl;
        i++;
        display();
    }
}

int main()
{
    display();

    return 0;
}