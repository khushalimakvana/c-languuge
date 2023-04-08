#include<stdio.h>
int main()
{
       int a=20,*p,**q,***r;
       p=&a;
       q=&p;
       r=&q;
       printf("value of a is : %d",a);
       printf("\n address of a is : %u",&a);
       printf("\n address of a is using p is : %d",p);
       printf("\n adress of p is : %u",&p);
       printf("\n value of a using q is : %d",*p);
       printf("\n adress of p is using q is:%d",q);
       printf("\n address of q is:%u",&q);
       printf("\n value of a using q is :%d  ",**q);
       printf("\n address of q using r is :%d",r);
       printf("\n adress of r is : %u",&r );
       printf("\n value of q using r is : %d",***r);

}