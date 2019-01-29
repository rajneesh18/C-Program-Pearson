/** Copy input to output */
#include<stdio.h>
int main(){
    int c;
    while((c = getchar()) != EOF){
        putchar(c);
    }
}

/**
 * Command:
 * ./a.out < infile.txt > outfile.txt
*/