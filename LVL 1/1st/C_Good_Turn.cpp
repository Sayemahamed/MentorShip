#include <stdio.h>

int main( void ) {
    // your code goes here
    int n, x, y;
    scanf( "%d", &n );
    for (int i = 0;i < n;i++)
    {
        scanf( "%d %d", &x, &y );
        if ((x + y) > 6)
            printf( "YES\n" );
        else
            printf( "NO\n" );

    }

    return 0;
}
