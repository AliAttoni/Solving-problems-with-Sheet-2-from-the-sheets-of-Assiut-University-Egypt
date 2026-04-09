#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

void Print_Shape1(int n)
{
	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			cout << "*";
		cout << endl;
	}
}

void Program()
{
	int n; 
	n = ReadNumber();

	Print_Shape1(n);
}

int main()
{
	Program();
}