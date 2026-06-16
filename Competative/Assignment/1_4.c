// Assignment 1:- Q4
// Accept one number and one check whether is is Divisible by 5 or Not

#include<stdio.h>
typedef int BOOLE;
#define TRUE 1
#define FALSE 0

BOOLE Check(int iNo)
{
    if((iNo%5)==0)
    {
        return TRUE;

    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOLE bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == TRUE)
    {
        printf("Divisbile by 5");
    }
    else
    {
       printf("Divisible not by 5");
    }
    return 0;
}