// Assignment 25 : - Q2
//  Accept number of rows and number of columns from user and Display below patteren

// Input = iRow = 4; iCol = 4;

// Output 
/*
1  2  3  4 
2  3  4  5 
3  4  5  6
4  5  6  7
*/

#include<stdio.h>

void Patteren(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    for(i = 1; i<=iRow; i++)
    {
        for(j = 1;j<=iCol;j++)
        {
           printf("%d\t",i+j-1);
            ;
      
        }
        printf("\n");
    }
}
int main()
{
   int iValue1 = 0;
   int iValue2 = 0;

   printf("Enter Number of Rows:");
   scanf("%d",&iValue1);

   printf("Enter Number of Coulmns:");
   scanf("%d",&iValue2);

   Patteren(iValue1,iValue2);

    return 0 ;
}