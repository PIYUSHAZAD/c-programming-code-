#include <stdio.h>
#include <stdlib.h>

// THIS PROGRAM DETERMINES WHETHER THE ENTERED NUMBER IS EQUAL TO THE NUMBER GIVEN TO MAGIC USING RAND FUNCTION

int main() {
    int magic, guess;
    magic = rand();
    printf("Guess the magic number    ");
    scanf("%d", &guess);
    guess == magic ? printf("You entered the right number.") : printf("You entered a wrong number. \a");

    return 0;
}