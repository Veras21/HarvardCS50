#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("Give me and int please:");
	int n = GetInt();

	if (n > 0)
	{
		printf("The integer %d is positive\n",n );
	}
	else if (n < 0)
	{	
		printf("the integer %d is negative\n",n );
	}	
	else if(n == 0)
	{
		printf("the integer %d is zero\n",n );
	}
	else
    {
		printf("Why you no like normal numbers\n");
	}
}
