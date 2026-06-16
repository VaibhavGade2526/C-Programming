// Assignment 14 :- Q3
// Aceept N number from user and check whether that numbers contains 11 in is not;

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
           return true;
        }
    }
    return false;

}
int main()
{

    int iSize = 0, iCnt = 0 ;
    int bRet = 0;
    int *p = NULL;

    printf("Enter number of Elements:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if( p== NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt<0;iCnt<iSize;iCnt++)
    {
        printf("Enter Element%d:",iCnt+1);
        scanf("%d",&p[iCnt]);

    }

    bRet = Check(p,iSize);

   if(bRet == true)
   {
    printf("11 is present");
   }
   else
   {
    printf("11 is not Present");
   }

   free(p);

    return 0;

}