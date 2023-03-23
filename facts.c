#include "main.h"
#include <stdio.h>


void print_fact(int n)
{
	int i, num1;

	for (i = 1; i < n; ++i)
	{
		for (num1 = 0; num1 < n; num1++)
		{
			if ((i * num1) == n)
			{
				printf("%d=%d*%d\n", n, num1, i);
				break;
			}
		}
	}
}
