#include<stdio.h>
void rev()
{
   int n,r=0;
   printf("enter the number:");
   scanf("%d",&n);
   while(n>0)
   {
      r=(r*10)+(n%10);
	  n=n/10;
	  }
	printf("revrese num is :%d",r);
}
 int main()
{
   rev();
}   