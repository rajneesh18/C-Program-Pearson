/**
 * Write a program to remove all comments from a C program.
 * Don't forget to handle quoted strings and character constants properly.
 * C comments do not nest.
*/
#include<stdio.h>
#define IN 1
#define OUT 0

void readcomment(int c);
void incomment(void);

int main(){
    int c;
    while((c = getchar()) != EOF){
        rcomment(c);
    }
}

void rcomment(int c){
    int d;
    if(c == '/'){
        if((d = getchar()) == '*'){
            incomment();
        }else if(d == '/'){
            // rcomment(d);
            // for(;((d = getchar()) != EOF && (d == '\n' || d == '\0'));)
            d = getchar();
            // putchar(d);
            while(d != EOF || d != '\n' || d != '\0'){
                d = getchar();
            }
        }else{
            putchar(c);
            putchar(d);
        }
    }else if(c == '"' || c == '\''){
        //code
    }else{
        putchar(c);
    }
}
void incomment(){
    int c,d;
    c = getchar();
    d = getchar();
    while(c != '*' || d != '/'){
        c = d;
        d = getchar();
    }
}