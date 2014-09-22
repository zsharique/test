#include<stdio.h>
#include<conio.h>
void printdetail(int x[]);
void main()
{
    int i;
    int x[15];

    for(i=0;i<15;i++)
    {
        x[i]=i;
    }
    printdetail(x);
}
void printdetail(int x[])
{
    int i;
    for(i=0;i<15;i++)
    {
        printf("value in the array is %d and the address is %p\n\n",x[i],&x[i]);
    }
}

