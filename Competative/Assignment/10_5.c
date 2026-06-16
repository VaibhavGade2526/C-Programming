//Assignment 10 :- Q5
// write a program which accept range from user and Display al numbers in between that range in reverse order

#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{

    int iCnt = 0;
    for(iCnt = iEnd;iCnt>=iStart;iCnt--)
    {
       printf("%d\t",iCnt);
    }

}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;


    printf("Enter Startig point:");
    scanf("%d",&iValue1);

     printf("Enter Startig point:");
    scanf("%d",&iValue2);
   
     RangeDisplayRev(iValue1,iValue2);




    return 0;
}