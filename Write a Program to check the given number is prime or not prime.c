#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=2;i<n/2;i++)
	{
		if(n%i==0)
		{
			printf("Not Prime\n");
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("Number is prime\n");
	}
	return 0;
}
