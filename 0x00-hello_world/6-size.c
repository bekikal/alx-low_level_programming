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

	printf("Size of a char: %zu byte(s)\n", Sizeof(charType));
	printf("Size of a int: %zu byte(s)\n", Sizeof(intType));
        printf("Size of a long int: %zu byte(s)\n", Sizeof(lType));
        printf("Size of a long long int: %zu byte(s)\n", Sizeof(llType));
	printf("Size of a float: %zu byte(s)\n", Sizeof(floatType));

        return (0);
}
	  
