#include<stdio.h>
int main()
{
	int i,j,n,k=1;
	printf("Enter the number of rows : ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	    for(j=n;j>i;j--)
	    {
	    	printf(" ");
		}
		for(k=1;k<=i;k++)
	    {
	    	printf("*");
		}
		printf("\n");
	}
	return 0;
}
