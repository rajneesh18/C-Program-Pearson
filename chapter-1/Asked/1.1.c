/** Program 1.1:
 * Run the "Hello, World" program on your system.
 * Experiment with leaving out parts of the program,to see what error messages you get.
*/

#include<stdio.h>
int main(){
    printf("Hello, World\n");
}

/**
 * Errors Comes:
 * 1. When we remove Header file: #include<stdio.h>
 * -> Warning : implicit declaraction of function 'prinf'
 * -> Warning : incompatible implicit declaration of built-in function 'printf'
 * -> Error   : include '<stdio.h>' or provide a declaration of 'printf'
 * 
 * 2. When we remove return type of main() i.e., int
 * -> Warning : return type defaults to 'int'
 * 
 * 3. When we remove semicolor(;) form the printf() line
 * -> Error   : expected ';' before '}' token
 * 
 * 4. When we remove '>' from the end of header file
 * -> Error   : missing terminator > character
 */ 