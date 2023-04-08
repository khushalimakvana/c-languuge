#include<stdio.h>
void perfect()
{
   int i=1,n,sum=0;
   printf("enter the number:");
   scanf("%d",&n);
   while(i<n)
   {
     if(n%i==0)
	 sum=sum+i;
	 i++;
}
  if(sum==n)
  printf("\n the %d is perfectg num",n);
  else
  printf("\n the %d is not a perfect num",n);
}
int main()
{
  perfect();
}  