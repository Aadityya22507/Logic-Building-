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
    switch (iRet)
    {
        case RET_FAIL:
            printf("Student is FAIL\n");
        break;

        case RET_PASSCLASSS:
             printf("Student is PASS CLASS\n");
        break;

        case RET_SECONDCLASS:
              printf("Student is SECOND CLASS\n");
        break;

        case RET_FIRSTCLASS:
              printf("Student is FIRST CLASS\n");
        break;

        case RET_DISTINCTION:
              printf("Student is FIRST CLASS WITH DISTINCTION\n");
        break;

        case RET_INVALID:
            printf("Invaild Input\n");
        break;
    }
    

    return 0;
}