#include<stdio.h>
struct bill
{
 int codenumber,rate,qty;
 float amt,dis,b,gst,netb;  
 char proname[10];
 };
 int main()
 {
     struct bill a[5];
	 int i;
	 
	 for(i=0;i<2;i++)
	 {
	   printf("enter codenumber:");
	   scanf("%d",&a[i].codenumber);
	   printf("enter the proname:");
	   scanf("%s",&a[i].proname);
	   printf("enter rate:");
	   scanf("%d",&a[i].rate);
	   printf("enter qty:");
	   scanf("%d",&a[i].qty);
	   
	   printf("\n");
	   
	}	
	printf("codenumber\tproname\trate\tqty\tamt\t\tdis\tbillamt\tgst\tnetbill\n ");
	for(i=0;i<2;i++)
    {
      	a[i].amt=a[i].rate*a[i].qty;
		a[i].dis=a[i].amt*5/100;
        a[i].b=a[i].amt-a[i].dis;
        a[i].gst=a[i].b*0.18;
       a[i].netb=a[i].b+a[i].gst;
     printf("\n%d\t\t%s\t%d\t%d\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t",a[i].codenumber,a[i].proname,a[i].rate,a[i].qty,a[i].amt,a[i].dis,a[i].b,a[i].gst,a[i].netb);
}	 
}