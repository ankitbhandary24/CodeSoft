#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int userGuess = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I have chosen a number between 1 and 100. Can you guess what it is?" << endl;
    int k = 0;
    while (userGuess != randomNumber)
    {
        cout << "Enter your guess: ";
        cin >> userGuess;
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
