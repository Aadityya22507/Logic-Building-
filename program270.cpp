#include <iostream>
using namespace std;

// Approach 2 : using while loop

void display()
{
    int i = 1;

    while(i <= 4)
    {
        cout << "*" << endl;
        i++;
    }
}

int main()
{
    display();

    return 0;
}