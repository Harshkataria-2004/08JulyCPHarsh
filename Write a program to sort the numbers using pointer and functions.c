#include <stdio.h>

// Function to sort the numbers using pointers
void sort(int n, int* ptr)
{
	int i,j,temp;

	for (i=0;i<n;i++) 
	{
		for (j=i+1;j<n;j++) 
		{
			if (*(ptr+j)<*(ptr+i)) 
			{
				temp=*(ptr+i);
				*(ptr+i)=*(ptr+j);
				*(ptr+j)=temp;
			}
		}
	}

	for (i=0;i<n;i++)
	{
		printf("%d  ",*(ptr+i));
	}
}

// Driver code
int main()
{
	int n,i;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(n,a);
	return 0;
}

