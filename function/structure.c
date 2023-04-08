#include<stdio.h>
struct stu
{
       int rollno,m,s,e,total;
       float per;
       char name[50];

};
int main()
{
      struct stu a[5];
      int i;
      for(i=0;i<2;i++)
      {

          printf("enter the roll no.");
          scanf("%d",&a[i].rollno);
          printf("enter the name:");
          scanf("%s",&a[i].name);
          printf("enter the maths marks:");
          scanf("%d",&a[i].m );
          printf("enter the sciense marks :");\
          scanf("%d",&a[i].s);
          printf("enter the eng marks:");
          scanf("%d",&a[i].e);

     }
     printf("\n rolino\tname\tmaths\tscie\tenglish\ttotal\tper ");
     for(i=0;i<2;i++)
     {
        a[i].total=a[i].m+a[i].s+a[i].e;
        a[i].per=(float)a[i].total/3;
        printf("%d\t%s\t%d\t%d\t%d\t%d\t%.2f\n",a[i].rollno,a[i].name,a[i].m,a[i].s,a[i].e,a[i].total,a[i].per  );
     }
}