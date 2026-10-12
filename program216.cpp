#include<iostream>
using namespace std;

int main()
{
    int iLenght = 0, i = 0;
    int *ptr = NULL;

    cout << "Enter the number of elements that you want to store:"<<endl;
    cin >> iLenght;

    ptr = new int[iLenght];

    //logic

    delete[] ptr;

    return 0;
}