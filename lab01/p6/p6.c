#include <stdio.h>  // include stdio.h header file

int main() {    // main function
    char str[100];  // declare variable str
    printf("Enter string: ");   // prompt user for input
    scanf("%s", str);   // read input and store in variable
    int len = 0;    // initialize variable len
    char *ptr = str;    // initialize pointer ptr to point to str
    while (*ptr != '\0') {  // loop until null character is encountered
        len++;  // increment len
        ptr++;  // increment ptr
    }
    printf("%d\n", len);    // print len
    return 0;   // return 0 to indicate successful execution
}