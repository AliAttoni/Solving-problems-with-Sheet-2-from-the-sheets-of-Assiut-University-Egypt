#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

int Reverse_Number(int n)
{
	int n_REV = 0 ;
	while (n > 0)
	{
		int Remainder = n % 10;
		n_REV = n_REV * 10 + Remainder;
		n /= 10;
	}
	return n_REV;
}

int main()
{
	int n = ReadNumber();
	cout << Reverse_Number(n) << endl;

	if (n == Reverse_Number(n))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}