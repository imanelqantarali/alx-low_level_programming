#include <stdio.h>
/*
 * main - entry  point
 * return: always 0
 */
int main(void)
{
	printf("Size of char: %lu bytes(s)\n", sizeof(char));
	printf("Size of int: %lu bytes(s)\n", sizeof(int));
	printf("Size of long: %lu bytes(s)\n", sizeof(long int));
	printf("Size of long long: %lu bytes(s)\n", sizeof(long long int));
	return (0);
}
