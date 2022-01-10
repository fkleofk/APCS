#include<stdio.h>
#include<stdlib.h>

int main () {
	int num ;
	int count = 0 ;
	int *arr = ( int* ) malloc ( sizeof ( int ) );
	while ( scanf ( "%d" , &num ) != EOF ) {
		arr[count++] = num ;
		arr = realloc ( arr , count*sizeof ( int ) ) ;
	}
	int i ;
	printf ( "Count: %d \n" , count ) ;
	for ( i = 0 ; i < count ; i++ ) {
		printf ( "%d " , arr[i] ) ;
	}
	
} 

