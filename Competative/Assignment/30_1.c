// Assignment   30 :- Q1
// write a proram which display ASCII table . Tble contains s symbol Decimal , HexdDeacimal and octal representation of every 
// member from 0 to 255;

#include<stdio.h>

void DisplayASCII()
{
    int i = 0;
    printf("Dec\tHex\tOct\tChar\n");

    for(i =0;i<=255;i++)
    {
        printf("%d\t%X\t%o\t%c\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();
    return 0 ;
}