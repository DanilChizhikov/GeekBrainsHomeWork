#include "Main.h"

int main(int* argc, char** args) {
	
	char answerGame;

	while (isGame)
	{
		cout << "Are you want play game? (y/n): ";
		cin >> answerGame;

		switch (answerGame)
		{
			case 'y': {
				GamePickSticks();
			}break;

			case 'n': {
				isGame = false;
				GerSummTwoInt();
				GetComparisonInt();

				cout << "Enter integer: " << endl;
				while (isWork)
				{
					CheckInt(0);
				}

				GetCharArray();

				unsigned int n;
				cout << "Enter integer: ";
				cin >> n;

				if (n <= 3) {

					do {
						cout << n << endl;
						n -= 1;
					} while (n <= 3);
				}
			}break;

			default:
				cout << "Invalid answer!" << endl;
				break;
		}
	}

	cout << IT_WORKS;

	return SUCCESS;
}