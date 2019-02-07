/**
 * Write a program to remove all comments from a C program.
 * Don't forget to handle quoted strings and character constants properly.
 * C comments do not nest.
*/
#include<stdio.h>
void rcomment(int c);
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
            x:
            if(d == '\n' || d == '\0' || d == EOF){
                putchar('\n');
            }else{
                d = getchar();
                goto x;
            }
        }else{
            putchar(c);
            putchar(d);
        }
    }else if(c == '"' || c == '\''){
        putchar(c);
        while((d = getchar()) != c){
            putchar(d);
        }
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
