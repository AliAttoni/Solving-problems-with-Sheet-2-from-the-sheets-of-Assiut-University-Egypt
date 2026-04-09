#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

bool Is_PrimeNumber(int N)
{
	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int x;
	x = ReadNumber();
	if (Is_PrimeNumber(x))
		cout << "YES";
	else
		cout << "NO";
}