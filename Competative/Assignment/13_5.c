// Assignment 13 :- Q5
// Accept number from user and Display all such elements which are multiples by 11

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt= 0;iCnt<iLength;iCnt++)
    {
      if(Arr[iCnt]%11==0)
      printf("%d\t",Arr[iCnt]);

    }
}
int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elemetns :");
    scanf("%d",&iSize);

   p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to alloate Memory");
        return -1;
    }

    printf("Enter %d Elements:\n",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter  elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    Display(p,iSize);

    free(p);
    return 0;
}