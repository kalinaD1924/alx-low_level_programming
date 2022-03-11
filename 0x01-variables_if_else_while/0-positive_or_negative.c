#include <stdio.h>
#include <stdlib.h>

	// This program will create same sequence of
	// random numbers on every program run
int main(void)
{

	for(int i = 0; i<5; i++)
		printf(" %d ", rand());

	return 0;
}
