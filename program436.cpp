#include<iostream>
using namespace std;

template <class T>

T Maximum(T Arr[] , int iSize)
{
    T iMax = Arr [0];
    int i = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if(iMax < Arr[i])
        {
            iMax = Arr[i];
        }
    }

    return iMax;
}

int main()
{
    int iLength = 0;
    float *ptr = NULL;
    int i = 0;
    float iRet = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements : \n";
    for(i = 0 ; i < iLength ; i++)
    {
        cin>>ptr[i];
    }

    iRet = Maximum(ptr , iLength);
    cout<<"Maximun is :"<<iRet<<"\n";

    delete []ptr;

    return 0;
}