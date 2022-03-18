#include<stdio.h>
int create();
int main()
{
	create();
	return 0;
}
int create()
{
	int arr[100],n,i=0,sum=0;
	printf("Enter the limit of the array: ");
	scanf("%d",&n);
	printf("Enter array elements:");
	while(i<=n-1)
	{
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		i++;
	}
	printf("Sum of the entered array=%d",sum);
	return 0;
}
