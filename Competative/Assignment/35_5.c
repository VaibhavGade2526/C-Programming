// Assignment :- 35 Q1
// write a program which check wether first and last bit is ON or OFF .
// first bit means bit number 1 and last bit means bit number is 32.


#include<stdio.h>
#include<stdbool.h>

typedef int UINT ;

UINT ChkBit(UINT iNo)
{
    UINT iMake = 0x80000001;
    UINT iAns = 0;

    iAns = iNo & iMake;

    if(iAns == iMake)
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

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkBit(iValue);

    if(bRet == true)
    {
        printf(" first and last bit is ON ");
    }
    else
    {
        printf(" first and last bit is OFF");
    }

    return 0;
}