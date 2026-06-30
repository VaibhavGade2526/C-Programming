// Assignment 37 :- Q2
// write a program wich accept from one number and postion from user and off that bit.Return modifed number

#include<stdio.h>
typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iAns = 0;

    iMask = iMask<<(iPos-1);

    iMask = ~iMask;

    iAns = iNo & iMask;

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

    iRet = OffBit(iValue,iLocation);

    printf("Updated Number Is :%d",iRet);


    return 0;
}