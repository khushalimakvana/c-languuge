#include<stdio.h>
int main()
{
   int i,j;
   i=1;
   do
   {
     j=1;
     do
	 {
		 if(i%2==0) 
        printf("%d",i);
		j++;
	 }while(j<=5);
	 printf("\n");
	 i++;
   }while(i<=10);
   

	
}	
	