/** \file memAlloc.h
*	\brief Header of DynamicMem.cpp
*/


//#pragma once genera un simbolo nella symbol table e fa la stessa cosa di ifndef, è più comodo

#ifndef MEMORY_ALLOC_DEF
#define MEMORY_ALLOC_DEF
/// <summary>
/// Function allocating a float array
/// </summary>
/// <param name="n">array size</param>
/// <param name="p">return value</param>
/// <returns></returns>
/// 
bool MemAlloc(int n, float*& p);	//bool è solo in c++, in c si pensa con il flag zero
bool MemAlloc(int n, int* &p);

/// <summary>
/// Function that frees the allocated memory from previous function
/// </summary>
/// <param name="p">start of array to free</param>
void MemFree(float* &p);
void MemFree(int* &p);
#endif
