#include<stdio.h>
int maths,sci,eng,total;
float avg;
int display()
{
     printf("\n maths\t sci\t eng\t total\t avg\t");
	 printf("\n %d\t %d\t %d\t %d\t  %2.f\t",maths,sci,eng,total,avg);
}
int clc()
{
 total=maths+sci+eng;
 avg=(float)total/3;
 display();
}
int setdata()
{
  printf("enter the maths:");
  scanf("%d",&maths);
  printf("enter the sci:");
  scanf("%d",&sci);
  printf("enter the eng:");
  scanf("%d",&eng);
  clc();
 }
int main()
{
setdata();
} 
 