// Assignment:- 33 Q3
// write a program which accept string from user reverse that string in place

#include<stdio.h>

int CountChar(char *str)
{
  int start = 0;
  int end = 0;
  char temp = 0;
    while (str[end] != 0)
    {
      end++;
    }
    end--;

    while (start<end)
    {
       temp = str[start];
       str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
    
}
int main()
{
    char Arr[20];

    printf("Enter String :");
    scanf("%[^\n]s",Arr);

    printf("Modified string  is %s",Arr);

    return 0;
}