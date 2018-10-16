/*
 * This program allows the user to enter 'n' numbers.
 *
 * Alejandra Chávez Cruz
 * A01411970@itesm.mx
 * 16/oct/18
 */
#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int main() {
    // My variables
    int x;
    int n;
    int counter;
    int reps;

     // Here I ask the user how many numbers he is entering
    printf("How many numbers are you entering?\n");
    scanf("%i", &n);

    int arr[n];

    // Loop that asks for the value and stores it in the array
    for (int i = 0; i < n; i++) {
        printf("Give me number %i:\n", i + 1);
        scanf("%i", &x);
        arr[i] = x;
    }

    // Sorts the numbers in the array from smallest to biggest.
    qsort(arr, n, sizeof(int), cmpfunc);
    printf("The unique numbers are:\n");


    for (int i = 0; i < n; i += counter+1) {
        counter = 0;

        do {

            if (arr[i] == arr[i+counter+1]) {
                counter++;
                reps = 1;
            } else {
                reps = 0;
            }
        } while (reps == 1);


        if (counter == 0) {
            printf("%i\n", arr[i]);
        }
    }
    return 0;
}