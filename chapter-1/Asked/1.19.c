/**
 * Write a function reverse(s) that reverses the character string s.
 * Use it to write a program that reverses its input a line at a time.
*/
#include<stdio.h>
#define MAXLINE 1000

int mgetline(char s[], int lim);    /* current input line */
void reverse(char line[]);          /* function that reverse the input line */

int main(){
    int len;
    char line[MAXLINE];     /* current input line */

    while((len = mgetline(line, MAXLINE)) > 0){
        reverse(line);
        printf("%s", line);
    }
}

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

void reverse(char s[]){
    int i, j, temp;
    /* Count the lenth of the line */
    for (i = 0; s[i] != '\0'; ++i);
    --i;        /* remove the \0 from the line */

    if(s[i] == '\n')
        --i;

    j = 0;
    while(j < i){
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}

/**
 * Input:
 * India is great
 * 
 * Output:
 * taerg si aidnI
*/