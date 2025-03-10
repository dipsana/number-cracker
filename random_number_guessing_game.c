// A number guessing game...
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function Prototype
char gameContinuation();

int main()
{
    srand(time(0)); // Seed RNG once at start
    int guess, nguess = 1, randomNo = rand() % 100 + 1; // guess stores user input, nguess tracks attempts, generate a randomNo  at range [1, 100]

    // Replay on yes
    do
    {
        printf("\nGuess the number between 1 to 100\n");
        // Validate Initialization
        while (scanf("%d", &guess) != 1 || guess > 100 || guess < 1)
        {
            // Clear input buffer
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
            printf("\nInvalid Entry! Please enter a number between 1 to 100!\n");
        }

        if (randomNo < guess)
        {
            printf("Lower number please!\n");
        }
        else if (randomNo > guess)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("\nCongrats you did it in ");
            (nguess > 1) ? printf("%d attempts!\n", nguess) : printf("your first try!\n");
            if (gameContinuation() == 'y') // gameContinuation call
            {
                // Reset random no., user attempts and winning guess
                randomNo = rand() % 100 + 1;
                nguess = guess = 0;
            }
        }
        nguess++; // Update attempts
    } while (randomNo != guess);
    printf("\nExiting the game...\n");
    return 0;
}

// Function Description:
// Replay? (Y/N) prompt
char gameContinuation()
{
    char choice = 'y';
    do
    {
        printf("\nDo you want to play again (y/n)?: ");
        scanf(" %c", &choice);
        choice = tolower(choice);
    } while (choice != 'y' && choice != 'n');
    return choice;
}