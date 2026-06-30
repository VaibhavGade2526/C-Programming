//Assignment 38 :- Q5
// write a program whidch accetpt onr number from user and range of position from user. Toggle all bits from that range

#include<stdio.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo,UINT iPos1, UINT iPos2)
{
    UINT iMask = 0;
    UINT iCnt = 0;

    for(iCnt = iPos1;iCnt<=iPos2;iCnt++)
    {
        iMask =  iMask | ( 1<< (iCnt - 1));
    }
    return (iNo ^ iMask);
}
int main()
{
    UINT iValue = 0;
    UINT iStart , iEnd,iRet = 0;

    printf("ENter Number:");
    scanf("%d",&iValue);

    printf("Enter start postion:");
    scanf("%d",&iStart);

    printf("Enter End postion:");
    scanf("%d",&iEnd);
    

    iRet = ToggleBitRange(iValue , iStart,iEnd);

    printf("Modified Number is : %u",iRet);
    


    return 0;
}