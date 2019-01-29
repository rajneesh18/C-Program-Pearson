/* Count lines, words and characters in input */
#include<stdio.h>
#define IN 1
#define OUT 0
int main(){
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    
    while((c = getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == '\n' || c == '\t' || c == ' ')
            state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("Lines: %d\nWords: %d\nCharacters: %d\n", nl, nw, nc);
}