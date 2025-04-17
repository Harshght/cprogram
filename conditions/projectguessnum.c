#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // Display the generated random number
    printf("Random number between 1 and 100: %d\n", randomNumber);

    return 0;
}
