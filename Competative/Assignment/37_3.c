// Assignment : 37 :- Q3
//  write a program which accept one number and one postion from user and on that bit . return modified number

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iAns = 0;

    iMask = iMask << (iPos-1);

    iAns = iNo | iMask;

    return iAns;
}
int main()
{
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    printf("Enter Location:");
    scanf("%d",&iLocation);

    iRet = OnBit(iValue,iLocation);

    printf("Updated number is:%d",iRet);

    return 0;
}