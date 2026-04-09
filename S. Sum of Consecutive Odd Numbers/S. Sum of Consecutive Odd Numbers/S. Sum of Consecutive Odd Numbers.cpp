#include<iostream>
using namespace std;

int Read_Test_Cases()
{
	int T;
	cin >> T;
	return T;
}

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

bool Check_IF_Number_Odd(int n)
{
	return (n % 2 != 0);
}

void Program()
{
	int Test_Cases = Read_Test_Cases();

	for (int i = 1; i <= Test_Cases; i++)
	{
		int x, y;
		x = ReadNumber();
		y = ReadNumber();
		int sum = 0; 
		if (x > y)
		{
			for (int i = 1+y; i < x; i++)
				if (Check_IF_Number_Odd(i))
					sum += i;
		}
		else
		{
			for (int i = 1+x; i < y; i++)
				if (Check_IF_Number_Odd(i))
					sum += i;
		}
		cout << sum << endl;
	}
}

int main()
{
	Program();
}