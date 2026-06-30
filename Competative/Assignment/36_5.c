// Assignmnet :- 36 Q5
// write a program which accept one number 
//from user and on its first 4 bits .Retutn modifed numbers

#include<stdio.h>

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
    UINT iMask = 0x0000000f;
    UINT iAns = 0;
    iAns = iNo | iMask;

    return iAns;

}
int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = OnBit(iValue);

    printf("Updated Number is : %d",iRet);

    return 0;
}