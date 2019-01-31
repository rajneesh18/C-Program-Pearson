/* Power Function */

#include<stdio.h>
int power(int m, int n);

/* test power function */
int main(){
    int i;

    for(i = 0; i < 10; ++i){
        printf("%d %d %d\n", i, power(2,i), power(-3,i));
    }
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n){
    int i, p;

    p = 1;
    for(i = 1; i <= n; ++i)
        p *= base;
    return p;
}

/*
Output:

0 1 1
1 2 -3
2 4 9
3 8 -27
4 16 81
5 32 -243
6 64 729
7 128 -2187
8 256 6561
9 512 -19683

*/