/**
 * Write a program to print all input lines that are longer than 80 characters.
*/
#include<stdio.h>
#define MAXLINE 1000
#define LIMIT 80
int mgetline(char line[], int lim);

int main(){
    int len;
    char line[MAXLINE];     /* current input line */

    while((len = mgetline(line,MAXLINE)) > 0){
        if(len < 80){
            printf("%s",line);
        }
    }
}

/* mgetline: read a line into s; return length */
int mgetline(char s[], int lim){
    int c, i;
    for(i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}