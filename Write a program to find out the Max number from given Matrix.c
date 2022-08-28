#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[3][3], i, j, max;
    printf("Enter any 3*3 matrix: ");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            scanf("%d", &arr[i][j]);
    }
    
    max = arr[0][0];
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(max<arr[i][j])
                max = arr[i][j];
        }
    }
    printf("\nMaximum Element in the matrix : %d", max);
    getch();
    return 0;
}

