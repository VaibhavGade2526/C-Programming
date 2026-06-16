// Assignmnet 22 :- Q5
// Accept number from user and Display below pattrn

//Input : 8
// Output : 2  4  6  8  10  12  14  16  
#include<stdio.h>

void Pattern(int iNo)
{

    int iCnt = 0;

    for(iCnt =1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iCnt*2);
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