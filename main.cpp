#include <stdio.h>
#include<string.h>
#define _crt_secure_no_warnings
#pragma warning(disable: 4996)

using namespace std;

int main()
{
	int a = 10;
	int* ptr_a = &a;

	printf("ptr_a=%d\n", ptr_a);
	printf("ptr_a+1=%d\n", ptr_a + 1);
	printf("ptr_a+2=%d\n", ptr_a + 2);

	return 0;
}