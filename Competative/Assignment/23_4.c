// Assignment 23 :- Q4
// Accept number of rows and number of columns from user and displya below pattern
// Input iRow = 3, iCol = 4;

// OutPut = 
/*

*  #  *  #
*  #  *  #
*  #  *  #

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i =1;i<=iRow;i++)
    {
        for (j = 1; j<=iCol; j++)
        {
         if(j%2==0)
         {
            printf("#\t");
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

    printf("Enter Number of Rows :");
    scanf("%d",&iValue1);

    printf("ENter Number of columns :");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0 ;
}