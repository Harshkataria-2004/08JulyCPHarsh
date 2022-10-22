#include <stdio.h>

int main()
{
	FILE *fp;
	char ch;
	fp = fopen("hello.txt", "r");

	if (NULL == fp)
	{
		printf("file can't be opened \n");
	}
	printf("The following is the information contained in the file : \n");
	do
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}
	while (ch != EOF);
	fclose(fp);
	return 0;
}
