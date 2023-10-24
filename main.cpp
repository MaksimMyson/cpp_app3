#include <iostream>
using namespace std;

int main()
{
	double numbers[7];

	int max_number = 0;

	for (int i = 0; i < 7; i++)
	{
		cout << "Enter number " << i + 1 << ": ";
		cin >> numbers[i];
	}

	for (int i = 0; i < 7; i++)
	{
		if (numbers[i] > max_number)
		{
			max_number = numbers[i];
		}
	}

	cout << "The largest number is " << max_number << endl;

	return 0;
}