#include<stdio.h>
main()
{
	int i,n,sum;
	int a[100],b[100];
	printf("Enter the number of array=");
	scanf("%d",&n);
	printf("Enter the element=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\narray[%d]=%d",i,a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
   printf("\nAddition=%d",sum);
   for(i=0;i<n;i++)
   {
   	 	b[i]=a[i];
   	 	printf("\nc[%d]=%d",i,b[i]);
   }
   
}

