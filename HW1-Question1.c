#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("char: size = %lu, min = %d, max = %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char: size = %lu, min = 0, max = %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("short: size = %lu, min = %d, max = %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("int: size = %lu, min = %d, max = %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int: size = %lu, min = 0, max = %u\n", sizeof(unsigned int), UINT_MAX);
    printf("unsigned long: size = %lu, min = 0, max = %lu\n", sizeof(unsigned long), ULONG_MAX);
    printf("float: size = %lu, min = %e, max = %e\n", sizeof(float), FLT_MIN, FLT_MAX);
    
    return 0;
}
