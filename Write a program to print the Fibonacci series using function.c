#include<stdio.h>
void fibonacci(int no)
{
   int i, n1=0, n2=1, n3;
   printf("%d\n%d\n",n1,n2);
	for(i=2;i<=no;i++)
	{
		n3=n1+n2;
		printf("%d\n",n3);
		n1=n2;
		n2=n3;
	}
}

int main()
{
   int no;

   printf("Enter a number : ");
   scanf("%d", &no);

   printf("The fibonacci series : \n");

   fibonacci(no);

   return 0;
}
