#include<stdio.h>
int main()
{
   int i,sum=0;
   i=1;
   do
   {
       if(i%2==0)
       printf("%d",i);
       i++;	   
	   sum+=i;
   }while(i<=50);
   printf("\n totqal is: %d",sum);
   }