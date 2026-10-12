#include<iostream>
using namespace std;

void Swap(int &A , int &B)
{
    int temp;
    temp = A;
    A = B;
    B = temp;
}

int main()
{
    int iVlaue1 = 10 , iVlaue2 = 20;

    cout<<"Value of Value 1 variable is :"<<iVlaue1<<"\n";
    cout<<"Value of Value 2 variable is :"<<iVlaue2<<"\n";

    Swap(iVlaue1 , iVlaue2);

    cout<<"Value of Value 1 variable after swapping is :"<<iVlaue1<<"\n";
    cout<<"Value of Value 2 variable after swapping is :"<<iVlaue2<<"\n";
}