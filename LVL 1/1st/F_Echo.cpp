#include<stdio.h> 

int main( void ) {
    int n;
    scanf( "%d", &n );
    char s[ n + 2 ];
    scanf( "%s", s );
    for (int i = 0; i < n; i++) {
        printf( "%c%c", s[ i ], s[ i ] );
    }
    return 0;
}