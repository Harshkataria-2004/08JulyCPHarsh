#include<stdio.h>
int main()
{
	int n,square_of_number,cube_of_number;
	printf("Enter a number : ");
	scanf("%d",&n);
	square_of_number = n * n;
	cube_of_number = n * n * n;
	printf("square of number : %d\n",square_of_number);
	printf("cube of number : %d\n",cube_of_number);
	return 0;
}
