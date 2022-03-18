#include<stdio.h>
void create();
int main()
{
	create();
	return 0;
}
void create()
{
	int arr[100],n,i=0;
	printf("Enter the limit of the array: ");
	scanf("%d",&n);
	printf("Enter array elements: ");
	while(i<=n-1)
	{
		scanf("%d",&arr[i]);
		i++;
	}
	printf("Entered array elements are: ");
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}
