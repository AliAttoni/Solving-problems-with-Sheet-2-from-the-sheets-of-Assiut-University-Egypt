#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

bool IS_PUM(int n)
{
	return (n % 4 == 0);
}

void Program()
{
	int n; 
	n = ReadNumber();

	for (int i = 1; i <= n * 4; i++)
	{
		if (IS_PUM(i))
			cout << "PUM\n";
		else
			cout << i << " ";
	}
}
int main()
{
	Program();
}