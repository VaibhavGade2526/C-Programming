// Assignmnet 22 :- Q2
// Accept number from user and Display below pattrn

//Input : 5
//OutPut : 5 # 4 # 3 # 2 # 1 #
#include<stdio.h>

void Pattern(int iNo)
{

    int iCnt = 1;

    for(iCnt = iNo;iCnt>=1;iCnt--)
    {
     
        printf("%d\t#\t",iCnt);
        
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