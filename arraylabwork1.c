#include<stdio.h>
main()
{
	int i,n;
	int array[100];
	printf("Enter the number of array=");
	scanf("%d",&n);
	printf("Enter the element=");
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\narray[%d]=%d",i,array[i]);
	}
}

