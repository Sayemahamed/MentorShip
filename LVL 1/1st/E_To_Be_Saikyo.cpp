#include<stdio.h>
int main() {
    int n, ans, max = 0;
    scanf( "%d", &n );
    int scores[ n ];
    for (int i = 1;i <= n;i++) {
        scanf( "%d", &scores[ i ] );
    }
    for (int i = 2;i <= n;i++) {
        if (max < scores[ i ]) {
            max = scores[ i ];
        }
    }

    if (max < scores[ 1 ]) {
        printf( "0" );
    }
    else {
        ans = max - scores[ 1 ] + 1;
        printf( "%d", ans );
    }

    return 0;
}