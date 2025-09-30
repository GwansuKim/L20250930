#include <iostream>

using namespace std;

int main()
{
	cout << "숫자의 갯수를 입력해 주세요 : ";

	long long CountOfNumber = 0LL;
	cin >> CountOfNumber;

	long long Result = 0LL;
	for (long long i = 0LL; i < CountOfNumber; i++)
	{
		long long InputNumber = 0LL;
		cin >> InputNumber;

		long long POT = 1LL;
		int Count = 0;
		while (POT < InputNumber && Count < 18)
		{
			POT *= 2LL;
			Count++;
		}

		if (i == 0LL)
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