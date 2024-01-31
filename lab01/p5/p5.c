#include <stdio.h>   // include stdio.h header file

int main() {    // main function
    int n;  // declare variable n
    printf("How big is the array? ");   // prompt user for input
    scanf("%d", &n);    // read input and store in variable
    int arr[n]; // declare array of size n
    for (int i = 0; i < n; i++) {   // loop from 0 to n - 1
        printf("Enter element %d: ", i + 1);    // prompt user for input
        scanf("%d", &arr[i]);   // read input and store in array
    }
    int count = 0;  // initialize variable count
    for (int i = 0; i < n; i++) {   // loop from 0 to n - 1
        int found = 0;  // initialize variable found
        for (int j = 0; j < i; j++) {   // loop from 0 to i - 1
            if (arr[i] == arr[j]) { // check if arr[i] is equal to arr[j]
                found = 1;  // set found to 1
                break;  // break out of loop
            }
        }
        if (found) {    // check if found is 1
            count++;    // increment count
        }
    }
    printf("%d\n", count);  // print count
    return 0;   // return 0 to indicate successful execution
}