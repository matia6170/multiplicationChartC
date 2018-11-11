#include <stdio.h>
#include <stdlib.h>

#define lenght 21
void line(void) {
	for (int i = 0; i < 116; i++)
	{
		printf("=");
	}
	printf("\n");
}

int main(void) {
	char string[lenght] = { "multiplication chart" };
	line();
	printf("%68s\n", string);
	line();
	for (int i = 1; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			printf("%3d X %d = %2d ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
}