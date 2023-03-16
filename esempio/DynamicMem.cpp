/** \file DynamicMem.cpp
*	\brief main module 
*/

#include "memAlloc.h"
#include <stdio.h>
#include <stdlib.h>

/** \short Array size
*/
#define N 10

int main()
{
	float* q;

	if (! MemAlloc(N, q)) 
	{
		printf("FAILURE");
		exit (0);
	}

	q[2] = 4.3;
	printf("%f \n\n", q[2]);
	MemFree(q);
	MemFree(q);		//Posso provare a deallocare più di 2 volte la memoria (codice di guardia lo impedisce)
}