#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[] = "Hello";
	char b[] = "World";
	char c[30];
	int len;

	printf("%s\n", a);
	printf("%c\n", a[0]);

	strcpy(c, a);
	printf("%s\n", c);

	strcat(a, b);
	printf("%s\n", a);

	len = strlen(a);
	printf("%d\n", len);

	return (0);
}

