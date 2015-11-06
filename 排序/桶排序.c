#include <stdio.h>

int main()
{
	int book[1001],i,j,n,t;

	for (int i = 0; i <= 1000; i++)
	{
		book[i] = 0;
	}
	printf("Please input the amount of the books:\n");
	scanf("%d",&n);
	printf("Please input the number of each book:\n");
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&t);
		book[t]++;
	}
	printf("the order of the books:\n");
	for (int i = 1000; i >= 0; i--)
	{
		for (int j = 1; j <= book[i]; j++)
		{
			printf("%d ",i);
		}
	}
	return 0;
}