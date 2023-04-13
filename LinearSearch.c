// implementing linear search

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10] = {39, 72, 90, 40, 4, 45, 76, 22, 3, 319};

	int n;
	int count = 0;
	
	
	int ind[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
	
	int i;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("\n");
	
	for(i = 0; i < 10; i++)
	{
		if(arr[i] == n)
		{
			ind[i] = i;
			count++;
		}
	}
	
	if(count >= 1)
	{
		printf("Element found at index / indices: ");
		
		for(i = 0; i < 10; i++)
		{
			if(ind[i] != -1)
			{
				printf("%d ", ind[i]);
			}
		}
		printf("\n");
	}
	else
	{
		printf("Element not found.\n");
	}
	
	return 0;
	
}
