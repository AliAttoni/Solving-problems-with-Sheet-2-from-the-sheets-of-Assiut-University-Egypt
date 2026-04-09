#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number; 
	return Number;
}
/*
int Find_GCD(int Number_a, int Number_b ) {
	if (Number_b % Number_a == 0)
		
	return Find_GCD( Number_b % Number_a, Number_a);
}

void Program()
{
	int Number_a, Number_b;
	
	Number_b = ReadNumber();
	Number_a = ReadNumber();
	int Min_a_b = min(Number_a, Number_b);
	int Max_a_b = max(Number_a, Number_b);


	cout << Find_GCD(Min_a_b, Max_a_b);
}
*/

int Find_GCD(int a, int b)
{
	int GCD = 0;
	for (int i = 1; i <= a; i++)
	{
		if (b % i == 0 && a % i == 0)
			GCD = i;
	}
	return GCD;
}

void Who_IS_Big(int& a, int& b)
{
	int Min = min(a, b);
	int Max = max(a, b);
	a = Min; b = Max; 
}

void Program()
{
	int a = ReadNumber();
	int b = ReadNumber();

	Who_IS_Big(a, b);
	cout << Find_GCD(a, b);
}

int main()
{
	Program();
}