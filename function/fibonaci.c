#include<stdio.h>
int fac(int n)
{
       int a=0,b=1,c,j,i;
       for(i=1;i<n;i++)
     {
        c=a+b;
        a=b;
        b=c;
     }
}
int main()
{
      int a=0,b=1,c,j,n,i;
      printf("enter the number:");
      scanf("%d",&n);
      for(i=1;i<n;i++)
      {
        c=a+b;
        
        j=fac(n);
        printf("\n fibonacy series: %d",b);
        a=b;
        b=c;

      }
      


}