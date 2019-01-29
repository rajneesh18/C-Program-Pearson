/* Print Celsius-Fahrenheit table
 * for fahr = 0, 20, ..., 300 */

#include<stdio.h>
int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;          /* lower limit of temperature table */
    upper = 300;        /* upper limit */
    step = 20;          /* step size */
    
    celsius = lower;
    printf("Celsius-Fahrenheit Table\n");
    while(celsius <= upper){
        fahr = (celsius * (9.0/5.0)) + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius += step;
    }
}

/**
 * Output:
 * Celsius-Fahrenheit Table
 *   0       32.0
 *  20       68.0
 *  40      104.0
 *  60      140.0
 *  80      176.0
 * 100      212.0
 * 120      248.0
 * 140      284.0
 * 160      320.0
 * 180      356.0
 * 200      392.0
 * 220      428.0
 * 240      464.0
 * 260      500.0
 * 280      536.0
 * 300      572.0
*/