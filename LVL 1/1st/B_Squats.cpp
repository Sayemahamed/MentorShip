#include <stdio.h>

int main( void ) {
    int T;
    scanf( "%d", &T );
    int x;
    for (int n = 0;n < T;n++) {
        scanf( "%d", &x );
        printf( "%d\n", x * 15 );
    }
    return 0;
}
