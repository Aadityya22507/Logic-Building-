#include<stdio.h>

void Display(iNo)
{
    int iCnt = 0;
    char ch = '\0';

    for(iCnt = 1 , ch = 'A' ; iCnt <= iNo ; iCnt++,ch++)
    {
        printf("%c\t*\t",ch);    
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}