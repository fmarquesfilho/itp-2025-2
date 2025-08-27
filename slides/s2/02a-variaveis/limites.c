#include <limits.h>
#include <stdio.h>

int main() {

	printf("char: (%d bits) %d %d\n", CHAR_BIT, CHAR_MIN, CHAR_MAX);
	printf("signed char: %d %d\n", SCHAR_MIN, SCHAR_MAX);
	printf("unsigned char: 0 %d\n", UCHAR_MAX);

	printf("short int: %d %d\n", SHRT_MIN, SHRT_MAX);
	printf("unsigned short int: 0 %d\n", USHRT_MAX);
	printf("int: %d %d\n", INT_MIN, INT_MAX);
	printf("unsigned int: 0 %u\n", UINT_MAX);
	printf("long int: %li %li\n", LONG_MIN, LONG_MAX);
	printf("unsigned long int: 0 %lu\n", ULONG_MAX);
	printf("long long int: %lli %lli\n", LLONG_MIN, LLONG_MAX);
	printf("unsigned long long int: 0 %llu\n", ULLONG_MAX);

	return 0;

}

