// Assignment 6:- Q3
// write program to find Factoiral of given number

#include<stdio.h>

int  Display(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
           iMulti = iMulti*iCnt;
        
    }
    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

   iRet = Display(iValue);
   printf("Multiplication is %d :",iRet);

    return 0;

}