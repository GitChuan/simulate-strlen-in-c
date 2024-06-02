#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <assert.h>

int my_strlen(char arr[])
{
	assert(arr);

	int count = 0;
	while (*arr)
	{
		count++;
		arr++;
	}

	return count;
}

int main()
{	
	char arr[100] = {0};
	gets(arr);

	int count = my_strlen(arr);
	printf("%d\n", count);
	
	getchar();
	return 0;
}
