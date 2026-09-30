#include <stdio.h>
#include <string.h>

#define STRLEN  10

int ReverseString( char *src, char *dest ) {
    int i;
    int len = strlen( src );


    for( i=1 ; i <= len ; i++ )
        dest[i] = src[ len - i ];

    return 0;    
}

int main() {
    char Inp_String[ STRLEN ] = "";
    char Out_String[ STRLEN ] = "";

    printf( "Enter a string of max 10 characters: ");
    scanf( "%s", Inp_String );

    ReverseString( Inp_String, Out_String );
    printf( "The reverse string of %s is %s\n", Inp_String, Out_String);

    return( 1 );
}