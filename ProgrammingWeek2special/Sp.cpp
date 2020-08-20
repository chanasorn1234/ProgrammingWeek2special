#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	float x;
	char k[] = { '¨','º','â','»','Ã','á','¡','Ã','Á' };
	scanf("%f", &x);
	if (x >= 0)
	{
		if (x >= 50)
		{
			printf("Pass\n");
		}
		else
		{
			printf("Fail\n");
		}
	}
	else
	{
		printf("Please insert the number that is greater or equal zero\n");
	}
	for (int i = 0; i <= 8; i++)
	{
		printf("%c\n", k[i]);
	}
	return 0;
}