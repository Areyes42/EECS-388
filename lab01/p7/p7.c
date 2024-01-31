#include <stdio.h>  // include stdio.h header file

int main() {    // creates a new scope
    int a, b;   // initialize variables a and b
    char op;    // initialize variable op
    printf("Enter expression: ");   // prompt user for input
    scanf(" (%d%c%d)^2", &a, &op, &b);  // read input and store in variables
    if (op == '+') {    // check if op is +
        printf("%d\n", (a + b) * (a + b));  // print result
    } else if (op == '-') {     // check if op is -
        printf("%d\n", (a - b) * (a - b));  // print result
    }
    return 0;   // return 0 to indicate successful execution
}