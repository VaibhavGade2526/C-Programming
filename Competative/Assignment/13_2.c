// Assignmnet 13  :- Q2
//Accept Number from user and Display all Such elemtns which are Divisible By 5

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength )
{
    int iCnt = 0;
    int iCount = 0;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]%5==0)
        {
          printf("%d\t",Arr[iCnt]);
        }
    }

}
int main()
{

    int iSize = 0,iCnt = 0;
    int*p = NULL;

    printf("Enter number of elemtns:");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("unable to allocate the Memory:");
        return -1;
    }

      printf("Enter %d Elements\n",iSize);

    for(iCnt = 0; iCnt <iSize;iCnt++)
    {
        printf("Enter Element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

      Display(p,iSize);


free(p);

    return 0;
}