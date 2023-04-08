#include<stdio.h>
int note()
{
    int a[10]={2000,500,200,100,50,20,10,5,2,1},i,n;
	printf("enter the note:");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
	   if(i>a[i])
	   {
	     printf("%d is note %d\n",a[i],n/a[i]);
		 n=n%a[i];
		}
}
}
int main()
{
 note();
} 