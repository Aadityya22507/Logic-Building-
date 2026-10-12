#include <iostream>
using namespace std;

// Approach 3 : using recurssion

void display()
{
    int i = 1;

    if (i <= 4) 
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