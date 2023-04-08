#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  printf("enter the a:");
  scanf("%d",&a);
  if(a%5==0)
  {
     printf("A grade");
	}
    else if(a%3==0)	
	{
	  printf("B grade");
	 }
    else if(a%1==0)
    {
       printf("C grade");
	 }
    else
    {
        printf("fail");
	}
}	