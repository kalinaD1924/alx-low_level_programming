#include <stdlib.h>
#include <time.h>

	// This program will create same sequence of random numbers on every program run

int main(void)
{
	int n;

	strand(time(0))
		n = rand() - RANDMAX / 2; 

	for(int i = 0; i<5; i++)
		printf(" %d ", rand());

	return 0;
}
