#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

void Print_Stars(int n)
{
	for (int i = 1;i <= n; i++)
		cout << "*";
}

void Print_Spaces(int n)
{
	for (int i = 1; i <= n;i++)
	{
		cout << " "; 
	}
}

void Program()
{
	int n;
	n = ReadNumber();

	int spaces = n - 1, Stars = 1;

	for (int i = 1; i <= n;i++)
	{
		Print_Spaces(spaces);
		Print_Stars(Stars);
		spaces--;
		Stars += 2;
		cout << endl;
	}
	for (int i = n; i >= 1; i--)

	{
		spaces++;
		Stars -= 2;
		Print_Spaces(spaces);
		Print_Stars(Stars);
		
		cout << endl;
	}

}

int main()
{
	Program();
}