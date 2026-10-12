#include<iostream>
using namespace std;

template class<T>

void Swap(T &A , T &B)
{
    T temp;
    temp = A;
    A = B;
    B = temp;
}

int main()
{
    char iVlaue1 = 'A' , iVlaue2 = 'M';

    cout<<"Value of Value 1 variable is :"<<iVlaue1<<"\n";
    cout<<"Value of Value 2 variable is :"<<iVlaue2<<"\n";

    Swap(iVlaue1 , iVlaue2);

    cout<<"Value of Value 1 variable after swapping is :"<<iVlaue1<<"\n";
    cout<<"Value of Value 2 variable after swapping is :"<<iVlaue2<<"\n";

    return 0;
}