#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number; 
	cin >> Number;
	return Number;
}

void PrintStars(int n)
{
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}

void Program()
{
	int n = ReadNumber();
	PrintStars(n);
}

int main()
{
	Program();
}