#include<stdio.h>
int main()
{
	int num, i, j;
	char space = ' ';
	printf("Enter number : ");
	scanf_s("%d", &num);
	for (i = 1; i <= num; i++)
	{
		printf("\n");
		for (j = 1; j <= num; j++)
		{
			if (i == 1 || i == num || j == 1 || j == num)
				printf("*");
			else
				printf("%c", space);
		}
	}
	return 0;
}