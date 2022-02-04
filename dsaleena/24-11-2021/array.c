#include<stdio.h>
#include<stdlib.h>

void main()
{
    int a[100],b[100],c[100];
    int i,j,temp,n1,n2,n3,n;
    printf("Enter the size of first array");
    scanf("%d",&n1);
    printf("Enter the size of second array");
   scanf("%d",&n2);
   n3=n1+n2;
    printf("Enter the first array");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);

    c[i]=a[i];
    n=n1;
    }
   printf("Enter the second array");
    for(i=0;i<n2;i++)
    {
    scanf("%d",&b[i]);
    c[n]=b[i];
    n++;
    }
    printf("Array after merging and sorting");
    for(i=0;i<n3;i++)
    {
        for(j=i+1;j<n3;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;

            }
        }
    }
    for(i=0;i<n3;i++)
        printf("%d\n",c[i]);
  }
