#include<stdio.h>
int main()
{
   int a[5],i;
   for(i=0;i<5;i++)
   {
    printf("enter a[%d]",i);
	scanf("%d",a[i]);
	}
	for(i=0;i<5;i++)
	{
	   printf("a[%d]:%d\n",i,a[i]);
	 }
}	 