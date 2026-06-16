// Assignmnet 22 :- Q3
// Accept number from user and Display below pattrn

//Input : 5
//OutPut : 1 * 2 * 3 * 4 * 5 *
#include<stdio.h>

void Pattern(int iNo)
{

    int iCnt = 1;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t*\t",iCnt);   
    }

}
int main()
{
    int iValue = 0;

    printf("Ener number of Elememnts:");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}