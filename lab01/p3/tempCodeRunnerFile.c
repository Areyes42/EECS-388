/* 
Write a C program to print all the prime numbers within a limit set by a user
input. The input will be a positive integer and the output should be a list of numbers
separated by space. For example:
[Prompt] Enter a number:
[Input] 6
[Output] 2 3 5
*/

#include <stdio.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers up to %d: ", n);
    for (int i = 2; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}