#include<stdio.h>
int main()
{
   int i,n;
   printf("enter the n:");
   scanf("%d",&n);
   i=1;
   do
   {
      printf("%d",(i*i));
	  i++;
	  }while(i<=n);
}
	  