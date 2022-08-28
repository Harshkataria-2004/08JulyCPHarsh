#include<stdio.h>

void func_strcpy(char str2[30], char str1[30])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
}
int main()
{
    char str1[30], str2[30];
    int i;
    printf("Enter string : ");
    gets(str1);

    func_strcpy(str2, str1);

    printf("Copied string : %s", str2);
	return 0;
}



