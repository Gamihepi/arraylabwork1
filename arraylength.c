#include<stdio.h>
main()
{
	int i,n,length;
	printf("Enter the number of array=");
	scanf("%d",&n);
	int array[n];
	printf("Enter the element=");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
	}
	length  = sizeof(array) / sizeof(array[0]);
	printf("\n array length is:%d",length );
		
}
