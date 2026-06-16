// Assignment 4 :- Q4
// write a program whicha accept number from the user and return summation oaa all its non Factors

#include<stdio.h>


int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo;iCnt++)
    {
        if(iNo%iCnt !=0)
        {
            iSum = iSum+iCnt; 
        }
    }
    return iSum;
}
int main()
{

    int iValue = 0;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = SumNonFactor(iValue);
    printf("%d",iRet);

    return 0;
}