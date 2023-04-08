#include<stdio.h>
int main()
{
           int a[5]={10,30,50,80,90};
           int *p,i;
           p=&a;
           for(i=0;i<5;i++)
           {
               printf("%d\t%u\t",*(p+i),(p+i));
           }
}