// Assignmnet :- 36 Q3
// write a program which accept one number 
//from user and toggle 7th  bit of that number  return mofified number
#include<stdio.h>

typedef int UINT ;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0x00000040;
    UINT iAns  = 0;

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

    printf("Updated Number : %d",iRet);


    return 0;

}
