// A number guessing game...
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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
        }
        
        nguess++;

    } while (number != guess);
       
    return 0;
}