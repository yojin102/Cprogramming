#include <stdio.h>
void main()
{
	int i, sum = 0;
	for (i = 1; i <= 4; i += 1)
		sum *= i;
	printf("sum =%d", sum);
}