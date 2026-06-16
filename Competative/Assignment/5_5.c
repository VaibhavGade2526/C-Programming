// Assignment 5 :- Q5
// write a program e=which accept N snd print first  multiples


 #include<stdio.h>

 void MultipleDisplay(int iNo)
 {
    int iCnt = 0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" %d\t",iNo* iCnt);
    }
 }
 int main()
 {
    int iValue = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    
MultipleDisplay(iValue);


    return 0;
 }
