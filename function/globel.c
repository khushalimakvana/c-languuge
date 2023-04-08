#include<stdio.h>
int display(int maths,int eng,int sci,int total,float avg )

{
  printf("\n maths \t eng \t sci\t total \t avg \tgrade");
  printf("\n %d\t %d\t %d\t %d\t %.2f\t",maths,sci,eng,total,avg);
  if(maths<35 || sci<35 || eng<25)
  {
	  printf("Fail");
  }
   else if(avg>80)
   {
      printf("A");
   }
   else if(avg>70)
   {
      printf("B");
   }
   else if(avg>60) 
   {
       printf("C");
   }
  else
  {
      printf("D");
  }  
}
int calc(int maths,int sci,int eng)	
{ 
 int total;
 float avg;
 total=maths+sci+eng;
 avg=(float)total/3;
 display(maths,sci,eng,total,avg);
}	
   
int setdata()
{   
    int maths,sci,eng;
    printf("enter the maths marks:");
	scanf("%d",&maths);
	printf("enter the sci marks:");
	scanf("%d",&sci);
	printf("enter the eng marks:");
	scanf("%d",&eng);
	calc(maths,sci,eng);
}
int main()
{
 setdata();
 } 