#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("please give me a number between 1 and 10\n");
	int n = GetInt()
	if ( n >= 1 && n <= 3)
	{
		printf("You picked a small number.\n");
	}
	else if (n > 3 && n <= 7)
	{
		printf("You picked %d, wich is a medium int\n",n);
	}
	else if (n > 7 && n <= 10)
	{
		printf("you picked %d, wich is a large int\n",n );
	}
	else
	{
		printf("You picked%d, that is not a valid number, please pick a number that is between 1 and 10\n",n );
	}
}