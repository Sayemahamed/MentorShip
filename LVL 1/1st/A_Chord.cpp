#include <bits/stdc++.h>
using namespace std;



//----------------------------------------------------------------//
// main function//
int main() {
    char S[ 4 ];
    scanf( "%s", S );
    if (S[ 0 ] == 'A' && S[ 1 ] == 'C' && S[ 2 ] == 'E')
        printf( "Yes" );
    else if (S[ 0 ] == 'B' && S[ 1 ] == 'D' && S[ 2 ] == 'F')
        printf( "Yes" );
    else if (S[ 0 ] == 'C' && S[ 1 ] == 'E' && S[ 2 ] == 'G')
        printf( "Yes" );
    else if (S[ 0 ] == 'D' && S[ 1 ] == 'F' && S[ 2 ] == 'A')
        printf( "Yes" );
    else if (S[ 0 ] == 'E' && S[ 1 ] == 'G' && S[ 2 ] == 'B')
        printf( "Yes" );
    else if (S[ 0 ] == 'F' && S[ 1 ] == 'A' && S[ 2 ] == 'C')
        printf( "Yes" );
    else if (S[ 0 ] == 'G' && S[ 1 ] == 'B' && S[ 2 ] == 'D')
        printf( "Yes" );
    else printf( "No" );
}