// Assignment 28 :- Q4
// Accpet number of rows and number of coilmns from user and Display below patteren

/*
Input : - iRow = 4 iCol = 4;
Output : - 

1  2  3  4  5
1  2        5
1     3     5
1  2   3  4  5

*/
#include<stdio.h>

void pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    for(i = 1; i<=iRow;i++)
    {
        for(j =1;j<=iCol;j++)
        {
            if(i == 1|| i==iRow||j == 1||j==iCol)
            {
            printf("%d\t",j);
            }
            else if(i==j)
            {
                printf("%d\t",j);
            }
            else
            {
                printf(" \t");
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