/** 
 * Write a program that prints its input pne word per line.
*/
#include<stdio.h>
int main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == ' '){
            putchar('\n');
        }else{
            putchar(c);
        }
    }
}