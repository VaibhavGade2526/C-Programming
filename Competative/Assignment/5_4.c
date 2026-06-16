//Assignment 5 :- Q4
// write a program which accepts N from user and print all odd numbers up to N

#include<stdio.h>

void oddDisplayint(int iNo)
{
    int iCnt = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;

    }

    for(iCnt = 1; iCnt<iNo;iCnt++)
    {
        if(iCnt%2 != 0)
        {
            printf("%d\t",iCnt);
        }
    }
    
}
int main()
{
    int iValue = 0;

    printf("Enter Numbers :");
    scanf("%d",&iValue);

oddDisplayint(iValue);

    return 0;
}