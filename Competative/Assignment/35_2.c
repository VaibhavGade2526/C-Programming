//Assignment :- 35 Q2
// write a program which check whether 5 th and 18 th bit is ON or OFF
#include<stdio.h>
#include<stdbool.h>


typedef int UINT;
bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00020010;
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
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf("5th And 18th bit is ON");
    }
    else
    {
        printf("5Th And 18th bit is OFF");
    }

    return 0;
}