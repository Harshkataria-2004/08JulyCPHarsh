#include<stdio.h>

int main()
{
	int arr[50];
	int i, j, n, temp;
	
	printf("Enter array size : ");
	scanf("%d",&n);
	
	printf("Enter elements in the array : \n");
	for(i=0;i<n;i++)
	{
		printf("Enter array no.%d : ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	printf("Array elements in sorted order : ");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
