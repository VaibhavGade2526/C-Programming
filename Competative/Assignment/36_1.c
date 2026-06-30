// Assignmnet :- 36 Q1
// write a program which accept one number 
//from user and 7th bit of that number if it is on return mofified number

#include<stdio.h>

typedef unsigned int UINT ;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0xffffffbf;
    UINT iAns = 0;

    iAns = iNo & iMask;
    
    return iAns;
}
int main()
{
    UINT iValue  = 0;
    UINT iRet;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Updated number :%d",iRet);

    return  0;
}