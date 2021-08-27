#include <stdio.h>

int main ()
{
	int i = 0;
	int j = 0;
	int rand = 1;
	printf("This is a new feature that I have added. Hope it works, and have fun!\n\n");
	printf("Let me build a triangle for you.\n\n");
	while (i < 5)
	{
		for (j = 0; j < rand; j++)
		{
			printf("*");
		}
		printf("\n");
		rand += 2;
		i++;
	}
	printf("\n");
	printf("It worked! Thank you and bye.\n");
	return 0;
}
	
