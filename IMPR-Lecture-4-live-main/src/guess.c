#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * A small game where the user must guess a (random) number between 1 and 20.
 * The player can guess multiple times, but at the end the number of guesses must be reported.
 *
 * TODO: Auditorieopgave B
 *  If the user guesses a number outside of [1,20], then the user can guess again, and the invalid guess is not counted.
 *
 *  Bonus: Report after each guess if the user was above or below the number.
 */
int main(void) {
    int number, guess, counter = 0;
    // remember to initialize random!
    srand((unsigned) time(0));
    number = rand() % 20 + 1;

    do {
        printf("Make a guess\n>");
        scanf("%d", &guess);
        counter++;
    } while (number != guess);

    printf("Tillykke, du gættede tallet %d.\n", number);
    printf("Det krævede %d gæt.\n", counter);
    return 0;
}
