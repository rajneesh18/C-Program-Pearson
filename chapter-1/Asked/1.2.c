/** 
 * Experiment to find out what happens when printf's argument containe \c,
 * where c is some character not listed above.
*/

#include<stdio.h>
int main(){
    printf("Hello World\c");
}

/** 
 * Output with warning:
 * Hello Worldc
 * 
 * Warning: unknown escape sequence: '\c'
*/