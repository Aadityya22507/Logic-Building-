#include<iostream>
using namespace std;

float Addition(float Arr[] , int iSize)
{
    float iSum = 0 ;
    float i = 0;

    for(i = 1 ; i < iSize ; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
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

    iRet = Addition(ptr , iLength);
    cout<<"Addition is :"<<iRet<<"\n";

    delete []ptr;

    return 0;
}