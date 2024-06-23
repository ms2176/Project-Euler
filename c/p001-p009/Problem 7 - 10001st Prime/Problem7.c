#include <stdio.h>

int main(int argc, char const *argv[]) {
    // Declaring, Assigning the variables

    int primeCount = 0;
    int prime = 0;
    int i = 2;

    while (primeCount < 10001) {
        int isPrime = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            prime = i;
            primeCount++;
        }

        i++;
    }

    printf("The 10001st prime number is %d \n", prime);
}