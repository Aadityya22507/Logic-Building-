#include <iostream>
using namespace std;

int StrlrnX(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    cout << "enter string " << endl;
    cin.getline(Arr, 100);

    iRet = StrlrnX(Arr);

    cout << "String length is " << iRet << endl;
}