// Assignmnet :- 36 Q4
// write a program which accept one number 
//from user and toggle 7th and 10th bit of that number  return mofified number

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000240;
    UINT iAns = 0;

    iAns = iNo ^ iMask;

    return iAns;
}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number is :%d",iRet);

    return 0 ;
}