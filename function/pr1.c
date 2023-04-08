#inlude<stdio.h>
int rev(int n,int r=0)
{
  int r;
  printf("enter the n:");
  scanf("%d",&n);
  while(n>0)
  {
    r=(r*10)+(n%10);
    n=n/10;
	}
	printf("revrese num is :%d",r);
	}
	int main()
	{
	 int r;
	 printf("enter the r:");
	 scanf("%d",&r);
	 rev();
	 }