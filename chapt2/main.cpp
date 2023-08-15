#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int generateRandomNumber()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand();
	return (randomNumber % 10) + 1;
}
int main()
{
	int guess;
	char playAgain;


	do
	{
		int tries = 0;
		bool keepPlaying = true;
		int die = generateRandomNumber();

		do
		{
			cout << "Pick a random number between 1 and 10: ";
			cin >> guess;
			tries++;

			if (guess == die)
			{
				cout << "You have guessed correctly" << endl;
				cout << " in " << tries << " tries" << endl;
				keepPlaying = false;
			}
			else if (guess > die)
			{
				cout << "Too high!\n" << endl;
			}
			else if (guess < die)
			{
				cout << "Too Low\n" << endl;
			}






		} while (keepPlaying == true);
		cout << "Play again? " << endl;
		cin >> playAgain;
	} while (playAgain == 'y');



	return 0;

}

