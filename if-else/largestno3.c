#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
	printf("enter the a:");
	scanf("%d",&a);
	printf("enter the b:");
	scanf("%d",&b);
	printf("enter the c:");
	scanf("%d",&c);
	if(a>b && a>c)
	{
        printf("the largest  no is :%d",a);		
	}
	else if(b>a && b>c)
     {
         printf("the largest no. is :%d",b);
	}
    else
     {
             printf("the largest no. is: %d",c);
	}
     getch();
}	 