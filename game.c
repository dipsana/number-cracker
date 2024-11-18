// A number guessing game...
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <ctype.h>

// Function Prototype
char gameContinuation();

int main(){
    // number is random generated number; 
    // guess is for storing numbers that the user is guessing; 
    // nguess for storing number of guesses made by the user; 
    int number, guess, nguess = 1;

    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 to 100

    // Keep running until the number is guessed
    do
    {
        printf("\nGuess the number between 1 to 100\n");
        scanf("%d", &guess);

        if (number < guess)
        {
            printf("Lower number please!\n");
        }
        else if (number > guess)
        {
            printf("Higher number please!\n");
        }
        else
        {
            (nguess > 1) ? printf("\nCongrats you have guessed the number after %d attempts!\n", nguess) : printf("\nCongrats you got it in your first try!\n");
            if (gameContinuation() == 'y') // Game continuation statement
            {
                // Generate a random number between 1 to 100 and resetting guess counters
                srand(time(0));
                number = rand() % 100 + 1;
                nguess = 0;
                guess = -1;
            }
        }
        
        nguess++;

    } while (number != guess);
    printf("\nExiting the game...\n");
    
    return 0;
}

// Function Description
char gameContinuation()
{
    char choice = 'y';
    do
    {
        // Game continuation statement I/p
        printf("\nDo you want to play again (y/n)?: ");
        scanf(" %c", &choice);

        choice = tolower(choice); // Convert choice to lowercase
    } while (choice != 'y' && choice != 'n');

    return choice;
}
