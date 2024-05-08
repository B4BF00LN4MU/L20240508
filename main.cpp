#include <stdio.h>
#include<string.h>
#define _crt_secure_no_warnings
#pragma warning(disable: 4996)

using namespace std;

int main()
{
	char greeting[100] = "Hello,";
	char name[100];

	scanf("%s", name);

	strcat(greeting, name);
	strcat(greeting, "!");

	printf("%s", greeting);

	return 0;
}