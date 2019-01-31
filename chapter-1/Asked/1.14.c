/**
 * Write a program to print a histogram of the frequencies of different characters in its input.
*/
#include<stdio.h>
#define TOTCHAR 96  /* total no of characters are 128 but used ones are from 32, so 128-32 = 96 */

int main(){
    int i, j, c;
    int freq[TOTCHAR];

    for(i = 0; i < TOTCHAR; ++i)
        freq[i] = 0;

    while((c = getchar()) != EOF){
        ++freq[c - 32];     /* Count the frequencies of input characters */
    }

    for(i = 0; i < TOTCHAR; ++i){
        if(freq[i] > 0){                /* Print only those characters which exists in input*/
            printf("%c : ",i+32);
            for(j = 0; j < freq[i]; j++)
                putchar('*');
            putchar('\n');
        }
    }
    putchar('\n');
}

/*
Input:
India is great

Output:
  : **
I : *
a : **
d : *
e : *
g : *
i : **
n : *
r : *
s : *
t : *

*/