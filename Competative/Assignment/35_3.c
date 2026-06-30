// Assignment 
// write a program check whether 7th & 15th & 21th & 28th bit is ON or OFF
#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask = 0x08204040;
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

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("7th & 15th & 21st & 28th bit is ON");
    }
    else
    {
         printf("7th & 15th & 21st & 28th bit is OFF");
    }

    return 0;
}