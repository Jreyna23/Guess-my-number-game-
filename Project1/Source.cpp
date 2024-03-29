// Guess My number 
// Number guessing game 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int secretNumber = rand() % 100 + 1; // Random number between 1 and 100
	int tries = 0;
	int guess;

	cout << "\tWelcome To Guess My Number\n\n";

	do
	{
		cout << "enter a guess: ";
		cin >> guess;
		++tries;

		if (guess > secretNumber)
		{
			cout << "Too High!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! you got it " << tries << "guesses!\n";
		}
	} while (guess != secretNumber);

	return 0;
}