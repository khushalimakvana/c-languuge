#include<stdio.h>
int sum(int a,int b)
{
   int total;
   total=a+b;
   printf("total is ;%d",total);
   }
   int main()
   {
   int x,y;
   printf("enter the x and y:");
   scanf("%d%d",&x,&y);
   sum(x,y);
   }
   