#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main()
{

    cout << "\n\t\t\t***Welcome to GuessTheNumber game!***"
         << endl;
    cout << "\t\t\t\t\tInstructions" << endl;
    cout << "\t\t\t1.You have to guess a number between 1 and 100." << endl;
    cout << "\t\t\t2.You will have limited choices that is 10 " << endl;
    cout << "\t\t\t\t\tGood Luck!"
         << endl;
    // Generate random function
    srand(time(0));
    int secretNumber = 1 + (rand() % 100);
    int playerChoice;
    int Choice;
    cout << "Press 1 for start the game" << endl;
    cin >> Choice;
    if (Choice == 1)
    {
        cout << "\nYou have 10 choices for finding the "
                "secret number between 1 and 100.";
        int choicesLeft = 10;
        for (int i = 1; i <= 10; i++)
        {

            // prompting the player to guess the secret
            // number
            cout << "\n\nEnter the number: ";
            cin >> playerChoice;

            // determining if the playerChoice matches
            // the secret number
            if (playerChoice == secretNumber)
            {
                cout << "Well played! You won, "
                     << playerChoice
                     << " is the secret number" << endl;
                cout << "\t\t\t Thanks for playing...."
                     << endl;
                cout << "Play the game again with "
                        "us!!\n\n"
                     << endl;
                break;
            }
            else
            {
                cout << "Nope, " << playerChoice
                     << " is not the right number\n";
                if (playerChoice > secretNumber)
                {
                    cout << "The secret number is "
                            "smaller than the number "
                            "you have chosen"
                         << endl;
                }
                else
                {
                    cout << "The secret number is "
                            "greater than the number "
                            "you have chosen"
                         << endl;
                }
                choicesLeft--;
                cout << choicesLeft << " choices left. "
                     << endl;
                if (choicesLeft == 0)
                {
                    cout << "You couldn't find the "
                            "secret number, it was "
                         << secretNumber
                         << ", You lose!!\n\n";
                    cout << "Play the game again to "
                            "win!!!\n\n";
                }
            }
        }
    }

    else
    {
        cout << "EXIT" << endl;
    }

    return 0;
}