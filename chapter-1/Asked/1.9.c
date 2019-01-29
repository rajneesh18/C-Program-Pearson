/**
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single blank.
*/
#include<stdio.h>
int main(){
    int c,nb;
    while((c = getchar()) != EOF){
        if(c != ' '){
            nb = 0;
        }else{
            ++nb;
        }
        if(nb < 2){
            putchar(c);
        }
    }
}