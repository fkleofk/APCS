#include<stdio.h> 
#include<string.h>
void bubblesort ( int arr[] , int len ) {
	int i , j , temp ; 
	for ( i = 0 ; i < len - 1 ; i++ ) {
		for ( j = 0 ; j < len - 1 ; j++ ) {
			if ( arr[j] > arr[j+1] ) {
				temp = arr[j] ;
				arr[j] = arr[j + 1] ;
				arr[j + 1] = temp ;
			}
		}
	}
}
int main () {
	int a[50] ;
	int i ;
	int len ;
	scanf ( "%d" , &len ) ;
	for ( i = 0 ; i < len ; i++ ) {
		scanf ( "%d" , &a[i] ) ;
	}
	
	bubblesort ( a , len ) ; 
	
	for ( i = 0 ; i < len ; i++ ) {
		printf ( "%d " , a[i] ) ;
	}
}
