#include<stdio.h>
#include<conio.h>
void main()
{
    int eng,sci,maths,total;
	float avg;
	printf("enter the eng maths");
	scanf("%d",&eng);
	printf("enter the maths marks :");
	scanf("%d",&maths );
	printf("enter the sci marks :");
	scanf("%d",&sci);
	total=eng+sci+maths;
	avg=(float)total/3;
	printf("\n total marks: %d",total );
	printf("\n avg marks : %f",avg);
}	