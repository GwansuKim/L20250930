#include <iostream>

using namespace std;

int main()
{
	cout << "������ ������ �Է��� �ּ��� : ";

	int CountOfNumber = 0;
	cin >> CountOfNumber;

	int Result;
	for (int i = 0; i < CountOfNumber; i++)
	{
		int InputNumber = 0;
		cin >> InputNumber;

		int POT = 1;
		while (POT < InputNumber)
		{
			POT *= 2;
		}

		if (i == 0)
		{
			Result = POT;
		}
		else
		{
			Result ^= POT;
		}
	}
	cout << "Result :: " << Result << endl;

	return 0;
}