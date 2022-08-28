#include<stdio.h>

void Rank(int percentage)
{
	if(percentage>75)
	{
		printf("Distinction");
	}
	else if(percentage>60 && percentage<=75)
	{
		printf("First Class");
	}
	else if(percentage>50 && percentage<=60)
	{
		printf("Second Class");
	}
		else if(percentage>35 && percentage<=50)
	{
		printf("Pass Class");
	}
		else
		{
			printf("Fail");
		}
}

int main()
{
	int m[5];
	int i,total=0;
	int percentage;
	for(i=0;i<5;i++)
	{
		printf("Enter marks of subject %d : ",i+1);
		scanf("%d",&m[i]);
		total=total+m[i];
	}
	printf("Total out of 500: %d\n",total);
	percentage=total/5;
	printf("Percentage : %d\n",percentage);
	Rank(percentage);
	return 0;
}

