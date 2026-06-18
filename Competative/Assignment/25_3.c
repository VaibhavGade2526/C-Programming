
// Assignment 25 : - Q3
//  Accept number of rows and number of columns from user and Display below patteren

// Input = iRow = 5; iCol = 5;

// Output 
/*
 a  b  c  d  e  
 1  2  3  4  5  
 a  b  c  d  e
 1  2  3  4  5
 a  b  c  d  e
*/

#include<stdio.h>


void Patteren(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
    int iCount = 0;
    char  ch = '\0';

    for(i = 1; i<=iRow; i++)
    {
        
           if(i%2!=0)
           {
        for(j = 1,ch='a';j<=iCol;j++,ch++)
        {
            printf("%c\t",ch);
            
        }
           }
           else
           {
            for(j = 1; j<= iCol;j++)
            {
                printf("%d\t",j);
            }
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