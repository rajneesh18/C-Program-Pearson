/**
 * Rewite the temperature conversion program of section 1.2 to use a function for converesion.
*/
#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

void fahrToCelsius();
void celsiusToFahr();

int main(){
    int c, fahr, celsius;

    printf("Temperature Conversion Table\n");
    printf("1 : Fahrenheit to Celsius Conversion\n");
    printf("2 : Celsius to Fahrenheit Conversion\n\n");
    printf("Enter your Choice: ");
    c = getchar();

    if(c == '1'){
        fahrToCelsius();
    }else if(c == '2'){
        celsiusToFahr();
    }else{
        printf("Invalid Choice\n");
    }
}

void fahrToCelsius(){
    float fahr, celsius;
    for(fahr = LOWER; fahr <= UPPER; fahr += STEP){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n",fahr,celsius);
    }
}
void celsiusToFahr(){
    float fahr, celsius;
    for(celsius = LOWER; celsius <= UPPER; celsius += STEP){
        fahr = (9.0 * celsius) / 5.0 + 32.0;
        printf("%3.0f %6.1f\n",celsius,fahr);
    }
}