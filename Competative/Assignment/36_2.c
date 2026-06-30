// Assignmnet :- 36 Q2
// write a program which accept one number 
//from user and 7th And 10th bit of that number if it is on return mofified number


#include<stdio.h>

typedef unsigned int UINT ;

UINT OffBit(UINT iNo)
{
    UINT iMask = 0xFFFFFDBF;
    UINT iAns = 0;

    iAns = iNo & iMask;

    return iAns;

}
int main()
{
    UINT  iValue = 0;
    UINT iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = OffBit(iValue);

    printf("Updated number is : %d",iRet);

    return 0;

}