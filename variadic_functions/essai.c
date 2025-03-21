#include <stdio.h>
#include <stdlib.h>

int add(int a, int b)
{
	return (a + b);
}

int main()
{
	int sum;

	int (*ptr)(int, int);
	ptr = &add;
	sum = ptr (2, 3);

	printf("%d\n", sum);
}
