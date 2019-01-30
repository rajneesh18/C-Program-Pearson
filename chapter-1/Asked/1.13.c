/**
 * Write a program to print a histogram of the lengths
 * of words in its input. It is easy to draw the histogram
 * with the bars horizontal; a vertical orientation is more
 * challenging.
*/

/* Horizontal Histogram of words in a Sentence */

#include<stdio.h>
#define MAXWL 20    /* Maximum length of a word */
#define MAXNO 25    /* Maximum number of words in a sentense */

#define IN 1    /* Inside a word */
#define OUT 0   /* Outside a word */

int main(){
    int c, i, j, nc, nw, state;
    int word[MAXWL];

    state = OUT;
    nc = nw = 0;
    for(i = 0; i < MAXNO; ++i){
        word[i] = 0;
    }

    while((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t'){
            if(state == IN)
                word[nw++] = nc;
            state = OUT;
            nc = 0;     /* Resetting the word-length for the next word */
        }else{
            state = IN;
            ++nc;
        }
    }
    word[nw++] = nc;

    for(i = 0; i < nw; ++i ){
        for(j = 0; j < word[i]; ++j){
            putchar('*');
        }
        putchar('\n');
    }
}