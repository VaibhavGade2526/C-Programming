// Assignment 7 :- Q2
// Accept amount in Us dooler and return its corresponding value in indian currency consider 1$ as 70 ruppes

#include<stdio.h>

int DollerToINR(int iNo)
{
   // 1$ = 70 ruppes;
    int rAns = 0;
    rAns = iNo*70;
    return rAns;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Numbers of USD:");
    scanf("%d",&iValue);

    iRet =DollerToINR(iValue);
    printf("value inINR is %d",iRet);    

    return 0;
}