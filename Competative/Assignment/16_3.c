// Assignment 16 :- Q3
// Acccept N number from the user and return the Difference Between Largest Small number

#include<stdio.h>
#include<stdlib.h>
int Difference(int Arr[],int iLength)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    for(iCnt= 1;iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
             iMax = Arr[iCnt];
        }
        if(Arr[iCnt]<iMax)
        {
             iMin = Arr[iCnt];
        }    
      
    }
      return (iMax - iMin); 
  
}
int main()
{
    int iSize = 0,iCnt = 0, iRet  = 0;
    int*p = NULL;

    printf("Enter Number of element ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p == NULL)
    {
        printf("Uable to allocate memory");
        return -1;
    }

    printf("Enter %d Elemets:\n",iSize);

    for(iCnt= 0;iCnt<iSize;iCnt++)
    {
        printf("Enter Elemets%d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("Difference is:%d",iRet);

   free(p);
    return 0;
}