#include<stdio.h>

int main()
{
	int n, i;
	int arr[50];
	
	printf("Enter number of elements : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter array no.%d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=1;i<n;i++)
	{
		if(arr[0] < arr[i])
		{
			arr[0]=arr[i];
		}
	}
	
	printf("Maximum number in the array : %d",arr[0]);
	
	return 0;
}
