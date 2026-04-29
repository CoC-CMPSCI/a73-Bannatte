#include "main.hpp"

int main()
{
	const int SIZE = 10;
	int shiftcount;
	int number[SIZE] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	cout << "Enter your number for circular shift left\n";
	cin >> shiftcount;

	printout(number, SIZE);
	shiftleft(number, SIZE, shiftcount);
	printout(number, SIZE);
}