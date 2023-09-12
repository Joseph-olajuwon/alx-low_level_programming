#include <stdio.h>
/**
 * main - print the size of various type based on 
 * the computer it is complied and run...
 * Return: Always 0 (Success)
 */
int main(void)

{
	printf("size of the char: %zu byte(s)\n", sizeof(char));
	printf("size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("sixe of a long int: %zu byte(s)\n", sizeof(long long int));
	printf("size of a float %zu byte(s)\n", sizeof(float));
	return (0);
}
