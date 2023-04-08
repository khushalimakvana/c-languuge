#include<stdio.h>
int main()
{
        int j,k,*a,*b,c;
        printf("enter the j:");
        scanf("%d",&j);
        printf("enter the k:");
        scanf("%d",&k);  
        printf("\nj=%d,k=%d\n",j,k);
        a=&j;
        b=&k;
        c=*a;
        *a=*b;
        *b=c;
        printf("\n j=%d,k=%d\n",j,k);

}