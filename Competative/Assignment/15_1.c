// Assignment 15 :- Q1
// Accept number from the user and accept one another number as NO chck whther NO is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Check(int Arr[],int iLength,int iNo)
{

    int iCnt = 0;
    for(iCnt=1;iCnt<iLength;iCnt++)
    {
      if(Arr[iCnt] == iNo)
      {
         return true;
      }
    }
    return false;
}
int main()
{
    int iSize = 0,iValue = 0,iCnt = 0;
    bool bRet = 0;

    int*p = NULL;

    printf("Enter Numbers of elements :");
    scanf("%d",&iSize);

    printf("Ente the number:");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements:",iSize);

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if(bRet== true)
    {
        printf("Number is present ");
    }
    else 
    {
       printf("Number is not present");
    }

    free(p);
    return 0;
}