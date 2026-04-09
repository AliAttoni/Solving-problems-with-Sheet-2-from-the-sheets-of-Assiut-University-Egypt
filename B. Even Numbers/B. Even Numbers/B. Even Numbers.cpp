#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

bool Check_if_Number_Even(int i)
{
	if (i % 2 == 0)
		return true;
	else
		return false;
}

void Print_EvenNumberform_1_to_n(int n)
{
	bool NoEven = true;
	for (int i = 1; i <= n; i ++)
		if (Check_if_Number_Even(i))
		{
			cout << i << endl;
			NoEven = false;
		}
	if (NoEven)
	{
		cout << -1;
	}
}

int main() {
	int n = ReadNumber();
	Print_EvenNumberform_1_to_n(n);
}