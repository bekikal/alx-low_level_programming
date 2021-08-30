#include <stdio.h>
/**
 *ksjdkfjlkjia
 *Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long long int llType;
	char charType;
	long int lType;

	printf("Size of a char: %zu bytes (s\n)", Sizeof(charType));
	printf("Size of a int: %zu bytes (s\n)", Sizeof(intType));
        printf("Size of a long int: %zu bytes (s\n)", Sizeof(lType));
        printf("Size of a long long int: %zu bytes (s\n)", Sizeof(llType));
	printf("Size of a float: %zu bytes (s\n)", Sizeof(floatType));
	
        return (0);
}
	  
