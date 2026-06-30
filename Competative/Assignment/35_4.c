// Assignmnet : - 35 Q4
// write a program check whether 7th & 8th & 9th &  bit is ON or OFF

#include<stdio.h>
#include<stdbool.h>


typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask = 0x000001C0;
    UINT iAns = 0;

    iAns = iNo & iMask;

    if(iAns == iMask)
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
    UINT iValue = 0;
    bool bRet = 0;

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("7th & 8th & 9th &  bit is ON");
    }
    else
    {
        printf("7th & 8th & 9th &  bit is OFF");
    }



    return 0;
}