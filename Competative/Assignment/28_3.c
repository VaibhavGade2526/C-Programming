// Assignment 28 :- Q3
// Accpet number of rows and number of coilmns from user and Display below patteren

/*
Input : - iRow = 6 iCol = 6;
Output : - 
*       *       *        *     *       *
*                       *               *
*               *                       *
*       *                               *
*       *       *       *       *       *

*/
#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = iRow; i>=1;i--)
    {
        for(j =1;j<=iCol;j++)
        {
    
            if(i == iRow|| i ==1|| j==i|| j == iCol|| j == 1||i ==j)
            {
             printf("*\t");
            }    
            else
            {
                printf("\t");
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