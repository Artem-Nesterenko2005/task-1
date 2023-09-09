#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int divisible, divider, incomplete_private, counter = 0;
	printf("Enter divisible ");
	scanf_s("%d", &divisible);
	printf("Enter divider ");
	scanf_s("%d", &divider);
	divisible = abs(divisible);
	divider = abs(divider);
	if (divisible > divider)
	{
		while (divisible > divider)
		{
			divisible = divisible - divider;
			counter += 1;
		}
		incomplete_private = counter;
		printf("%d", incomplete_private);
	}
	else
	{
		printf("Error");
	}
}

