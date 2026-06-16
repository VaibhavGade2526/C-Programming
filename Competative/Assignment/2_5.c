// Assignment 2 :- Q5
// Accept numbr from user and check whether number is even or odd

#include<stdio.h>

#define true 1
#define false 0

typedef int bool;


bool Check(int iNo)
{
    if(iNo%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet= false;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd NUmber");
    }
    return 0;
}