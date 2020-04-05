#include <iostream>

using namespace std;

namespace _geek {

	int SummTwoInt(int x, int y) {
		return x += y;
	}

	void ComparisonInt(int x) {
		int z = 5;

		if (x > 5) {
			cout << "Please enter other integer: ";
			cin >> x;
			if (x > 5 && x < 10) {
				x -= 5;
				cout << x << endl;
			}
			else
			{
				z -= x;

				if (z == 0) {
					cout << z + " = 0" << endl;
				}
				else if (z > 0)
				{
					cout << z + " > 0" << endl;
				}
				else
				{
					cout << z + " < 0" << endl;
				}
			}
		}
		else if (x != 5)
		{
			cout << "x != 5" << endl;
		}
		else
		{
			cout << "x = 5" << endl;
		}
	}
}