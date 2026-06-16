// Assignment 4:- Q1
// Write   a program which accept number from user and Display its Factors in Decreasing order

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo/2;iCnt>=1;iCnt--)
    {
        if(iNo%iCnt==0)
        {
           printf("%d\t",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}

// Time Complexity N = N/2;