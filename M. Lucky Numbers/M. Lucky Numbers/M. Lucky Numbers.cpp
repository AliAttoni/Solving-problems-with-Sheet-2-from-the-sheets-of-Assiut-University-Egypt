#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number; 
	return Number;
}

bool Is_Lucky(int n)
{
	while (n > 0)
	{
		int Remainder = n % 10;
		if (Remainder != 4 && Remainder != 7)
			return false;
		n /= 10;
	}
	return true;
}

void Program()
{
	int a = ReadNumber();
	int b = ReadNumber();

	bool Ok = true ;

	for (int i = a; i <= b; i++)
	{
		if (Is_Lucky(i)) {
			cout << i << " ";
			Ok = false;
		}
	}
	if (Ok)
		cout << -1;
}

int main()
{
	Program();
}