#include<stdio.h>
#include<conio.h>
void main()
{
    int maths,guj,eng,total;
	float avg;
	printf("enter the guj:");
	scanf("%d",&guj);
	printf("enter the maths:");
	scanf("%d",&maths);
	printf("enter the eng:");
	scanf("%d",&eng);
	total=maths+guj+eng;
	avg=(float)total/3;
	printf("total marks is:%d",total);
	printf("avg marks is:%1.f",avg);
	getch();
}	