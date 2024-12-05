#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess what it is?" << endl;
    int k = 0;
    // Loop until the user guesses the correct number
    while (userGuess != randomNumber)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Provide feedback on the user's guess
        if (userGuess < randomNumber)
        {
            cout << "Too low! Try again." << endl;
            k++;
        }
        else if (userGuess > randomNumber)
        {
            cout << "Too high! Try again." << endl;
            k++;
        }
        else
        {
            k++;
            cout << "Congratulations! You guessed the correct number: " << randomNumber << endl;
            cout << "You took " << k << " attaimpts to Guess.";
        }
    }

    return 0;
}
