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
	for (int i = 1; i <= n;i++)
		cout << "*";
}

void Print_Spaces(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << " ";
	}
}

void Program()
{
	int n; 
	n = ReadNumber();
	int spaces = n - 1, stars = 1;
	for (int i = 1; i <= n; i++)
	{
		Print_Spaces(spaces);
		Print_Stars(stars);
		cout << endl;
		spaces--;
		stars += 2;
	}
}
int main()
{
	Program();
}