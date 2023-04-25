#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*
 * main contains code 
 * code returns 0
 * */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ( n > 0 )
		printf("%n is a positive number\n",n);
	else if (n < 0)
		printf("%n is a negative number\n",n);
	else
		printf("%n is zero\n",n);
	return (0);
}
