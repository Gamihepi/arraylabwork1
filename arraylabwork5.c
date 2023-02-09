#include <stdio.h>
main()
{
    int n1,n2,n3,i;            
    int a[100], b[100], c[200];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(i = 0; i < n1; i++)  
	{
		printf("a[%d]=",i);	    
       scanf("%d", &a[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the array elements: ");
    for( i = 0; i < n2; i++)      
    {
    	printf("b[%d]=",i);
	    scanf("%d", &b[i]);
	}
    n3 = n1 + n2;
    for( i = 0; i < n1; i++)
    {
	   c[i] = a[i];
    }
    for(i = 0; i < n2; i++)     
    {
	    c[i+n1] = b[i];
    }
    printf("The merged array: ");
    for( i = 0; i < n3; i++)
    {
		   printf("%d ", c[i]);  
	}
}
