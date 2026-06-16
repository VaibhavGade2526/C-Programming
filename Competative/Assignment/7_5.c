// Assignment 7 :- Q5
// Write program to find even factorsand odd factorial  of diffrence given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactE = 1;
    int iFactO = 1;
    int Ans = 0;

    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        if(iCnt%2==0)
        {
            iFactE = iFactE*iCnt;
        }
        else
        {
            iFactO = iFactO*iCnt;
        }

    }
      return  Ans = iFactE-iFactO;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter  number :");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    
    printf("Factoril diffference is %d",iRet);


    return 0;
}