#include <stdio.h>  // include stdio.h header file

int main() {    // main function
    int a, b;   // declare variables
    char op;    
    printf("Enter 1st operand: ");  // prompt user for input
    scanf("%d", &a);    // read input and store in variable
    printf("Enter operation: ");    
    scanf(" %c", &op);
    if (op == 's') {    // check if op is s
        printf("%d\n", a * a);  // print result
    } else {    // if op is not s
        printf("Enter 2nd operand: ");  // prompt user for input for 2nd operand
        scanf("%d", &b);
        if (op == '+') {    // check if op is +
            printf("%d\n", a + b);  // print result
        } else if (op == '-') {
            printf("%d\n", a - b);  // print result
        } else if (op == '*') {
            printf("%d\n", a * b);  // print result
        } else if (op == '/') {
            printf("%d\n", a / b);  // print result
        }
    }
    return 0;   // return 0 to indicate successful execution

}