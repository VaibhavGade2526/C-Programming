// Assignmnet 38 :- Q4
// write a program which accept of number from user and ramge of postion from user . Toggle all bits from that range


#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit( UINT iNo,UINT iPos1,UINT iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iAns1 = 0;
    UINT iAns2 = 0;

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask1 << (iPos2 - 1);

     iAns1 =  iNo & iMask1;
     iAns2 = iNo & iMask2;

     if (iMask1 == iAns1 || iMask2 == iAns2)
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
    UINT iValue;
    UINT iLoaction1;
    UINT iLoaction2;
    bool bRet = false;

    printf("Enter Number:");
    scanf("%d",&iValue);

    printf("Enter 1 st Postion :");
    scanf("%d",&iLoaction1);

    printf("ENter 2nd Positon :");
    scanf("%d",&iLoaction2);

     bRet = ChkBit(iValue,iLoaction1,iLoaction2);

     if(bRet == true)
     {
        printf("TRUE\n");
     }
     else
     {
        printf("FALSE");
     }
    return 0;
}