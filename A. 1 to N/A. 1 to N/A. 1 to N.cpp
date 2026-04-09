#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}
void PrintNumber(int number)
{
	for (int i = 1; i <= number; i++)
		cout << i << endl;
}

int main()
{
	int n = ReadNumber();
	PrintNumber(n);
}