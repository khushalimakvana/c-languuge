#include<stdio.h>
#include<conio.h>
void main()
{
    int i,n,sum=0;
	float avg;
	printf("enter the n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
		printf("%d",i);
	}
	    printf("sum %d",sum);
		avg=(float)sum/n;
		printf("\n%.1f ",avg);
}	
		
	  
	    
		
	