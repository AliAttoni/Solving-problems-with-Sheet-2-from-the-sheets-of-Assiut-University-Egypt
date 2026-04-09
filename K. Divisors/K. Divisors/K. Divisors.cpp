#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number; 
	return Number;
}

bool IS_Divid(int Number, int Divid_by)
{
	if (Number % Divid_by == 0)
		return true;
	else
		return false;
}

void PrintDivider( int Number )
{
	for (int i = 1; i <= Number; i++)
	{
		if (IS_Divid(Number, i))
			cout << i << "\n";
	}
}

void Program()
{
	int Number;
	Number = ReadNumber();

	PrintDivider(Number);
}

int main()
{
	Program();
}
