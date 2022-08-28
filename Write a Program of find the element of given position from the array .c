#include <stdio.h>
 
int main()
{
    int i,n,index;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the index : ");
    scanf("%d",&index);
    printf("Element at %d is %d",index,a[index]);
    
	return 0;
}

