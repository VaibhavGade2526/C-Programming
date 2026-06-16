//  Assignment3 :-Q2
// write the program which accept number from user and print even factors of that number:

#include<stdio.h>


void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1;iCnt<=iNo;iCnt++)
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

    printf("Enter your number:");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    return 0;
}