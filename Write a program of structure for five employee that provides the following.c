#include<stdio.h>

struct employee{
    char empname[30];
    int empno;
    int age;
    char address[50];
};
 
int main()
{

    struct employee emp;
     
    printf("\nEnter details :\n");
    printf("Employee Name :");          
	gets(emp.empname);
    printf("Employee no :");            
	scanf("%d",&emp.empno);
    printf("Emloyee age :");        
	scanf("%d",&emp.age);
	printf("Employee Address :");          
	scanf("%s",&emp.address);
     
    printf("\nEntered detail is:");
    printf("Name : %s\n",emp.empname);
    printf("Empno : %d\n",emp.empno);
    printf("Age : %d\n",emp.age);
    printf("Address : %s\n",emp.address);
    return 0;
}
