/*
    0 to 35     fail                            35 is exclusive
    35 to 50    pass class                      50 is exclusive
    50 to 60    second class                    60 is exclusive
    60 to 75    first class                     75 is exclusive
    75 to 100   first class with distinction    100 is exclusive
*/
#include<stdio.h>

// user defined macro
#define RET_INVALID -1

#define RET_FAIL 1
#define RET_PASSCLASSS 2
#define RET_SECONDCLASS 3
#define RET_FIRSTCLASS  4
#define RET_DISTINCTION 5


int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))//filter
    {
       return RET_INVALID;
    }

    if ((fMarks >=0.0f)&&(fMarks <35.0f))
    {
        return RET_FAIL;
    }
     else if((fMarks >=35.0f)&&(fMarks <50.0f))
    {
        return RET_PASSCLASSS;
    }
     else if((fMarks >=50.0f)&&(fMarks <60.0f))
    {
        return RET_SECONDCLASS;
    }
     else if((fMarks >=60.0f)&&(fMarks <75.0f))
    {
        return RET_FIRSTCLASS;
    }
     else if((fMarks >=75.0f)&&(fMarks <100.0f))
    {
        return RET_DISTINCTION;
    }

    
    

}





int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage:");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    

    if(iRet == RET_INVALID)
    {
        printf("Your input is invalid\n");
    }
    else if (iRet == RET_FAIL)
    {
        printf("Student is FAIL\n");
    }
    else if(iRet == RET_PASSCLASSS)
    {
        printf("Student is having PASSCLASS\n");
    }
    else if(iRet == RET_SECONDCLASS)
    {
        printf("Student is having SECONGCLASS\n");
    }
    else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is having FIRSTCLASS\n");
    }
    else if(iRet == RET_DISTINCTION)
    {
        printf("Student is having DISTINCTION\n");
    }

    return 0;
}