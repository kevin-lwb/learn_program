//编程范式12 Programming Paradigms CS107 lecture 12
// preprocessing and macro
#define kWidth 40
#define kHeight 80
#define kPerimeter 2*(kWidth + kHeight)

#define MAX ((a) > (b))?(a):(b)
//导致效率低下
MAX(fib(100), fact(4000));

// vector
#define NthElemAddr(base, elemSize, index) \
		((char*)base + index*elemSize)

void *vectorNth(vactor *v, position)
{
	assert(position >= 0);
	assert(position < v->logLength);
	return NthElemAddr(v->elems, v->elemSize, position);
}

//
#ifdefine NDEBUG
	#define assert(cond) (void)0
#else

#endefine
#define assert(cont) \
	(cond)?((void)0):fprintf(stderr, " erro massege"), exit(0)

//main.c
#include<stdio.h> // printf
#include<stdlib>  // malloc free
#include<assert.h>

int main(int argc, char* argv[])
{
	void *mem = malloc(400);
	assert( mem != NULL);
	printf("Yay!\n");
	free(mem);
	return 0;
}
