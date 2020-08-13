#include <stdio.h>
int il_test( int x );
int pl_test( int x );
int main( void ){
	printf("test1\r\n");
	il_test(2);
	pl_test(3);
	return 0;
}
