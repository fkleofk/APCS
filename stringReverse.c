#include<stdio.h>
#include<string.h>
char normalreverse ( char c[100] ) {
	int s ;
	s = strlen ( c ) / 2 ;
	int i = 0 ;
	char temp ;
	while ( s != 0 ) {
		temp = c[i] ;
		c[i] = c[strlen(c) - i - 1] ;
		c[strlen(c) - i - 1] = temp ;
		s-- ;
		i++ ;
	}
	printf ( "%s" , c ) ;
}

int main () {
	char c[100] ;
	scanf ( "%s" , &c ) ;
	normalreverse ( c ) ;
}
