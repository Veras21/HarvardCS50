#include <cs50.h>
#include <stdio.h>

int main(void)
{
	printf("give me an int:");
	int x = GetInt();
	printf("give me another int:");
	int y = GetInt();
	printf("the sum of %d and %d is %d\n",x,y, x + y );
}