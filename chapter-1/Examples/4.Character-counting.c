/* Count characters in input: 1st Version */
#include<stdio.h>
int main(){
    long nc;
    nc = 0;
    while( getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);
}