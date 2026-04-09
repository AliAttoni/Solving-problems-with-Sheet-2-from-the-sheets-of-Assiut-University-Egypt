#include<iostream>
using namespace std; 

int ReadNumber()
{
	int Number;
	cin >> Number; 
	return Number; 
}

int Convert_Decimal_Binary(int Number)
{
	int Number_of_1 = 0;
	while (Number > 0)
	{
		if (Number % 2 == 1)
			Number_of_1++;
		Number /= 2;
	}
	return Number_of_1;
}

int Convert_Binary_Decimal(int Number)
{
	int D_Number = 0 , Bin = 1 ;
	while (Number > 0) {
		D_Number += Bin;
		Bin *= 2;
		Number --;
	}
	return D_Number;
}

void Program()
{
	int Test_case = ReadNumber();
	for (int i = 1; i <= Test_case; i++) {
		int Number = ReadNumber();
		int m = Convert_Decimal_Binary(Number);
		cout << Convert_Binary_Decimal(m) << endl;
	}
}


int main()
{
	Program();
}