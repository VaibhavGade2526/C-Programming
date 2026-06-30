// Assignment :- 35  Q1
// write a program which checks whether 15 th bit ison or off 
#include<stdio.h>
#include<stdbool.h>



typedef unsigned int UINT;

// 15 bit 
bool ChkBit(UINT iNo)
{
    UINT iMask = 0x00004000;  
    UINT iAns = 0;

    iAns = iNo & iMask;
    if(iAns == iMask)
    {
      return true ;
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
    scanf("%u",&iValue);

    bRet = ChkBit(iValue);

    if (bRet == true)
    {
        printf("15 th bit is ON\n");
    }
    else 
    {
        printf("15 th bit is OFF\n");
    }
    
    return 0;

}