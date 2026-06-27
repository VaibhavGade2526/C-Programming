// Assignment 28 :- Q2
// Accpet number of rows and number of coilmns from user and Display below patteren

/*
Input : - iRow = 4 iCol = 4;
Output : - 

*  *  *  #
*  *  #  @
*  #  @  @
#  @  @  @ 

*/
#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i<=iRow;i++)
    {
        for(j = iCol;j>=1;j--)
        {
            if(j==i)
            {
            printf("#\t");
            }
            else if(i>j)
            {
                printf("@\t");
            }
            else
            {
                printf("*\t");
            }
            
        }
        printf("\n");
    }
}
int main()
{

    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter number of Columns:");
    scanf("%d",&iValue2);

    pattern(iValue1,iValue2);

    return 0 ;
}