#include<stdio.h>
#include<string.h>
int a()
{
    char str1[50], str2[50];
    int i,j,k=0;
    printf("Enter Number: ");
    scanf("%[^\n]s",&str1);

    printf("Original Name: %s",str1);

    for(i=0;str1[i]!='\0';i++);
    k=i;
    for(j=0;j<i;j++)
        {
            str2[j]=str1[--k];
        }
    str2[j]='\0';

    printf("\nReverse Name: %s",str2);
}
int main()
{
	a();
}