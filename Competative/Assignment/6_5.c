// Assignment 6:-Q5
// Accept number from the user and Display in tables reverse order

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;


    if(iNo<0)
    {
        iNo = -iNo;
    }

    for(iCnt=10;iCnt>=1; iCnt--)
    {
       printf("%d\t",iNo*iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Numbers:");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}