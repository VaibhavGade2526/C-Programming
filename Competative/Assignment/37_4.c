// Asignment 37 :- Q4
// write a program which accept onr number and postion from user andtoggle taht bit .return

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo,UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

    iAns = iNo ^ iMask;

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

    iRet = ToggleBit(iValue,iLocation);

    printf("Updated Number : %d",iRet);

    return 0;
}