#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,count=0;
	clrscr();
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count=count+1;
		}
	}
	if(count==2)
	{
		printf("%d is prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}
	getch();
}


