#include "Engine.h"

Engine::Engine()
{
	catsAndCougars = new CatsAndCougars();
	validation = new Validator();
	wordGenerator = new WordGenerator(IS_DEBUG);
}

/*
:)TODO: deallocate any pointers used by this class
*/
Engine::~Engine()
{
	delete catsAndCougars;
	delete validation;
	delete wordGenerator;

}

void Engine::play()
{
	// TODO: call the Instructions static print function
	Instructions::print();
	do
	{
		bool winner = false;
		int currentRound = 1;
		string hiddenWord = wordGenerator->getRandomizedWord();

		while (currentRound <= NUM_LIVES)
		{
			string playerGuess = getPlayerGuess(currentRound);

			/*
			TODO: determine if the player won by calling the didPlayerWin function

			If the player did win, output the winning message by calling the
			playerWins function. Then set the winner boolean to true and break the loop.
			
			If the player did not win, call the incorrectGuess function and increment the
			currentRound variable.
			*/
			if (didPlayerWin(hiddenWord, playerGuess))
			{
				playerWins();
				winner = true;
				break;
			}
			if (!didPlayerWin(hiddenWord, playerGuess))
			{
				incorrectGuess(hiddenWord, playerGuess);
				currentRound++;
			}
			else
			{
				cout << "PLAY FUNCTION LOGIC ERROR. DID PLAYER WIN?" << endl;
			}
		}

		/*
		TODO: interrogate the winner bool variable. If the player is not a winner, call
		the playerLoses function to output the losing message.
		*/
		if (!winner)
		{
			playerLoses();
		}

	} while (playAgain());
}

bool Engine::playAgain()
{
	char again = 'n';
	cout << "Do you wish to play again? (y or n): ";
	cin >> again;

	return toupper(again) == 'Y';
}

void Engine::invalidPlayerGuess()
{
	cout << "Each guess must be an isogram " << WORD_LEN <<  " letters in length.Please try again." << endl;
}

string Engine::getPlayerGuess(int currentRound)
{
	string word = "";

	do
	{
		cout << "Round: " << currentRound << ". Please make your guess. " << NUM_LIVES - currentRound + 1 << " guesses remain: ";
		cin >> word;

		if (!validation->isPlayerGuessValid(word, WORD_LEN))
		{
			invalidPlayerGuess();
		}
	} while (!validation->isPlayerGuessValid(word, WORD_LEN));

	return Utility::toLowerCase(word);
}

void Engine::playerWins()
{
	cout << "Wow good job! You guessed correctly, you're a pro!" << endl;
}

bool Engine::didPlayerWin(string hiddenWord, string playerGuess)
{
	return hiddenWord == playerGuess;
}

void Engine::playerLoses()
{
	cout << "Womp womp! You Lose!" << endl;
}

void Engine::incorrectGuess(string hiddenWord, string playerGuess)
{
	catsAndCougars->count(hiddenWord, playerGuess);
	cout << "WROOOONG, " << playerGuess << " is not the hidden word. You have " <<
		catsAndCougars->getCats() << " Cats and " << catsAndCougars->getCougars() <<
		" Cougars this round." << endl;

	cout << "Across all rounds, you have " << catsAndCougars->getTotalCats() << " Cats and " << catsAndCougars->getTotalCougars() << " Cougars." << endl;
}