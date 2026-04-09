#include<iostream>
#include<cmath>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

bool Is_PrimeNumber( int n )
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int n;
	n = ReadNumber();

	for (int i = 2; i <= n; i++)
	{
		if (Is_PrimeNumber(i) )
			cout << i << " ";
	}
}