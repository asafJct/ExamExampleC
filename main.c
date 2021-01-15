#include "Fibonacci.h"

void PrintFibonnaciNumber(unsigned long long fib, size_t index)
{
	printf("The %d number in the fibonnacci series is:%d\n"
	,index, fib);
}


int main(void)
{
	size_t index = 100;
	unsigned long long fib = Fibonacci(index);
	PrintFibonnaciNumber(fib, index);

	index = 55;
	fib = Fibonacci(index);
	PrintFibonnaciNumber(fib, index);

	index = 55;
	fib = Fibonacci(index);
	PrintFibonnaciNumber(fib, index);
	
	index = 101;
	fib = Fibonacci(index);
	PrintFibonnaciNumber(fib, index);
	return 0;
}