#include<stdio.h>
#include<string.h>
char pointerreverse(char *cadena) {
    if(cadena != NULL){                                 // add some checks...    
        size_t len = strlen(cadena);
        char *end = cadena + (len > 1 ? len - 1 : 0);   // ...for safety    
        char *aux = cadena;

        for (len /= 2; len; --len) {
            char tmp = *aux;
            *aux++ = *end;
            *end-- = tmp;
        }
    }
    printf ( "%s\n" , cadena ) ;
} // source : https://www.796t.com/post/Y2t6Y2c=.html //
	
int main () {
	char c[100] ;
	scanf ( "%s" , &c ) ;
	pointerreverse ( c ) ;	
}
