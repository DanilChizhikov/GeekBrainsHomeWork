#include "DataProgramm.h"

void GerSummTwoInt()
{
	int x;
	int y;

	cout << "Enter first integer: ";
	cin >> x;
	cout << "Enter second integer: ";
	cin >> y;

	cout << SummTwoInt(x, y) << endl;
}

void GetComparisonInt()
{
	int x;
	cout << "Enter Integer: ";
	cin >> x;
	ComparisonInt(x);
}

void CheckInt(int a)
{
	cin >> a;
	switch ((constant_set)a)
	{
	case csConstant1:
	case csConstant2:
	case csConstant3: {
		cout << "You hit first half :)" << endl;
		isWork = false;
	}break;

	case csConstant4:
	case csConstant5:
	case csConstant6: {
		cout << "You hit second half :)" << endl;
		isWork = false;
	}break;

	default:
		cout << "You entered an invalid value :(" << endl;
		cout << "Try again: ";
		break;
	}
}

void GamePickSticks()
{
	int countSticks;
	while (isGame)
	{
		cout << "Enter count sticks: ";
		cin >> countSticks;

		if ((countSticks >= 10) && (countSticks <= 30)) {
			int playerCount;
			int indexPlayer = 1;
			while (isGame)
			{
				char answerSingle;
				cout << "Are you want play vs bot? (y/n): ";
				cin >> answerSingle;

				switch (answerSingle)
				{
					case 'y': {
						int countTake;
						do
						{
							cout << countSticks; cout << " sticks left" << endl;

							if (indexPlayer == 1) {
								cout << "Player_1 take: ";
								cin >> countTake;
							}
							else
							{
								cout << "Player_Bot take: ";
								bool isBot = true;
								while (isBot)
								{
									int random = rand() % 4;
									if (random <= 3 && random > 0 && random <= countSticks) {
										countTake = random;
										isBot = false;
									}
								}
								cout << countTake << endl;
							}

							if (countTake <= 3 && countTake > 0) {
								if (countTake <= countSticks) {
									
									countSticks -= countTake;

									if (countSticks == 0) {

										switch ((Players)indexPlayer)
										{
											case player: {
												cout << "Player_1 Won!" << endl;
											}break;

											case bot: {
												cout << "Player_Bot Won!" << endl;
											}break;
										}
										isGame = false;
										break;
									}
									else
									{
										if (indexPlayer <= 2) {
											if (indexPlayer == 2) {
												indexPlayer = 1;
											}
											else
											{
												indexPlayer++;
											}
										}
									}
								}
								else
								{
									cout << "You took more than there are sticks!" << endl;
								}
							}
							else if (countTake > 3)
							{
								cout << "You take more 3 stiks!" << endl;
							}
							else if (countTake < 1)
							{
								cout << "You must take your chopsticks!" << endl;
							}
						} while (countSticks != 0);
						
					}break;

					case 'n': {
						cout << "Please enter count players: ";
						cin >> playerCount;

						if (playerCount > 1) {

							int countTake;

							do
							{
								cout << countSticks; cout << " sticks left" << endl;
								cout << "Player_"; cout << indexPlayer; cout << " take: ";
								cin >> countTake;

								if (countTake <= 3 && countTake > 0) {
									if (countTake <= countSticks) {
										countSticks -= countTake;
										if (countSticks == 0) {
											cout << "Player_"; cout << indexPlayer; cout << " Won!" << endl;
											isGame = false;
											break;
										}
										else
										{
											if (indexPlayer <= playerCount) {
												if (indexPlayer == playerCount) {
													indexPlayer = 1;
												}
												else
												{
													indexPlayer++;
												}
											}
										}
									}
									else
									{
										cout << "You took more than there are sticks!" << endl;
									}
								}
								else if (countTake > 3)
								{
									cout << "You take more 3 stiks!" << endl;
								}
								else if (countTake < 1)
								{
									cout << "You must take your chopsticks!" << endl;
								}
							} while (countSticks != 0);
						}
						else
						{
							cout << "Playing this game alone is too boring!" << endl;
						}
					}break;

					default:
						cout << "Invalid answer!" << endl;
						break;
				}
			}
		}
		else if (countSticks > 30)
		{
			cout << "You exceeded the limit on sticks!" << endl;
		}
		else if (countSticks < 10)
		{
			cout << "You entered too little!" << endl;
		}
	}
}

void GetCharArray()
{
	char arrCharr[10];

	for (int i = 0, int j = 0; i < 10; i++, j += 3)
	{
		arrCharr[i] = j;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arrCharr[i] << endl;
	}
}
