/**
 * Write a program 'detab' that replaces tabs in the input with the proper number of blanks
 * to space to the next tab stop. Assume a fixed set of tab stops, say every n columms.
 * Should n be a variable or a symoblic parameter ?
*/
#include<stdio.h>
#define TAB 8       /* No of blanks a tab hold */

int main(){
    int c, pos, nb;

    nb = 0;
    pos = 1;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            nb = TAB - ((pos - 1) % TAB);
            while(nb > 0){
                putchar('#');
                ++pos;
                --nb;
            }
        }else if(c == '\n'){
            pos = 1;
        }else{
            putchar(c);
            ++pos;
        }
    }
}

/**
 * Input: 
 * Hello    India   is  great
 * 
 * Output:
 * Hello###India###is######great
*/