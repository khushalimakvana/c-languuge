#include<stdio.h>
#include<conio.h>
void main()
{
   int i,sum=0;
   for(i=1;i<=5;i++)
   if(i%2==1)
   {
     sum+=i;
	 printf("%d",i);
	}
    printf("total is : %d",sum);
}	