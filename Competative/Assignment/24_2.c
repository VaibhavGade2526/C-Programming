// Assignment 24 :- Q2
// Accept number of rows and number of columns from user and displya below pattern
// Input iRow = 4, iCol = 4;

// OutPut = 
/*
A  B  C  D
a  b  c  d
A  B  C  D
a  b  c  d

*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i = 0;
    int j = 0;
   
    for(i = 1;i<=iRow;i++)
    {
        for (j = 1; j<=iCol; j++)
        {
            if(i%2==1)
            {
              printf("%c\t",'A'+j-1);
            }
            else
            {
               printf("%c\t",'a'+j-1); 
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
 
