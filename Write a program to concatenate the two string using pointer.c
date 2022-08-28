#include <stdio.h>
#include <string.h>

void main()
{
  char str1[100], str2[100], *p, *q;

  printf("Enter the first string : ");
  gets(str1);
  printf("Enter the second string : ");
  gets(str2);

  p = str1;
  q = str2;

  while (*p != '\0')
  {
    p++;
  }

  while (*q != '\0')
  {
    *p = *q;
    q++;
    p++;
  }
  *p = '\0';

  printf("After the concatenation: %s ", str1);
}
