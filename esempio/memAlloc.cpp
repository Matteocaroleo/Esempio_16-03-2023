/** \file memAlloc.cpp
*	\brief Functions definitions  
*/

#include "memAlloc.h"
#include <stdlib.h>
#include <stdio.h>

bool MemAlloc(int n, float* &p) //bisogna sempre controllare la consistenza dei parametri
								// & = è un reference
{
	if (n <= 0) {
		printf("invalid array size");
		return false;
	}
	p = (float*)malloc(n * sizeof(float));
	if (p == NULL)
	{
		printf(" mem alloc failed");
		return false;
	}
			
	return true;
}

bool MemAlloc(int n, int* &p) // è un override
{
	if (n <= 0) {
		printf("invalid array size");
		return false;
	}
	p = (int*)malloc(n * sizeof(int));
	if (p == NULL)
	{
		printf(" mem alloc failed");
		return false;
	}

	return true;
}

void MemFree(float* &p)
{
	if (p)
		free(p);
	p = 0; 
}

void MemFree(int*& p)
{
	if (p)
		free(p);
	p = 0;
}
