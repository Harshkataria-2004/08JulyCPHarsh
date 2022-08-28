#include<stdio.h>
#define pie 3.14
int main()
{
	int ch;
	float area,l,w,h,b,r;
	printf("Choose : \n");
	printf("1.Area of Triangle\n");
	printf("2.Area of Rectangle\n");
	printf("3.Area of circle\n");
	printf("Enter choice : ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("\nEnter base: ");
			scanf("%f",&b);
			printf("\nEnter height: ");
			scanf("%f",&h);
			area=h*b/2;
			printf("\nArea of Triangle : %f\n",area);
			break;
			case 2:
			printf("\nEnter length: ");
			scanf("%f",&l);
			printf("\nEnter width: ");
			scanf("%f",&w);
			area=l*w;
			printf("\nArea of Rectangle : %f\n",area);
			break;
			case 3:
			printf("\nEnter radius: ");
			scanf("%f",&r);
			area=pie*r*r;
			printf("\nArea of circle : %f\n",area);
			break;
	}
	return 0;
}
