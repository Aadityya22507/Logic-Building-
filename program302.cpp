#include <iostream>
using namespace std;

int StrlrnX(char *str)
{
    static int iCnt = 0;

    if ((*str != '\0'))
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {    iCnt++;}
        str++;
        StrlrnX(str);
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