#include <stdio.h>  // include stdio.h header file


int isPrime(int num) {  // function to check if num is prime
    if (num <= 1) {    // 0 and 1 are not prime
        return 0;   // return 0 to indicate num is not prime
    }
    for (int i = 2; i * i <= num; i++) {   // check if num is divisible by any number from 2 to sqrt(num)
        if (num % i == 0) { // if num is divisible by i
            return 0;   // return 0 to indicate num is not prime
        }
    }
    return 1;   // return 1 to indicate num is prime
}

int main() {    // creates a new scope
    int n;  // initialize variable n
    printf("Enter a number: "); // prompt user for input
    scanf("%d", &n);    // read input and store in variable
    printf("Prime numbers up to %d: ", n);  // print message
    for (int i = 2; i <= n; i++) {  // loop from 2 to n
        if (isPrime(i)) {   // check if i is prime
            printf("%d ", i);   // print i
        }
    }
    return 0;   // return 0 to indicate successful execution
}