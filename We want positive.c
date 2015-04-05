#include <cs50.h>
#include <stdio.h>

int main(void)
{
	int n;
	do
	{
		printf("please give me a positive int:");
		n = GetInt();
	}
	while (n > 0);
	{
		printf("Thanks for the number\n");
	}
}