
#include <iostream>
using namespace std;

int main()
{
    int number; cin >> number;
    double bonusPoint = 0.0;
	if (number<=100)
	{
		bonusPoint = 5;
	}
	else if (number>1000)
	{
		bonusPoint = 0.1 * number;
	}
	else
	{
		bonusPoint = 0.2 * number;
	}

	if (number % 2 == 0)
	{
		bonusPoint += 1;
	}
	else if (number % 10 == 5)
	{
		bonusPoint += 2;
	}
	cout << bonusPoint << endl;
	cout << bonusPoint+number << endl;

}

