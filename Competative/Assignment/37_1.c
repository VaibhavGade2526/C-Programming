// Assignment  37 :- Q1
// write Write a program which accept ome number and postion from user and check whethr bit at that 
// postion is or off If bit is one return True oterwise return false

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo , UINT iPos)
{
    UINT iMask = 0x00000001;
    UINT iAns = 0;

    iMask = iMask << (iPos - 1);

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
    UINT iLocation = 0;
    bool bRet =  false;

    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Postion :");
    scanf("%d",&iLocation);

    bRet = ChkBit(iValue,iLocation);

    if(bRet == true)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }



    return 0;
}