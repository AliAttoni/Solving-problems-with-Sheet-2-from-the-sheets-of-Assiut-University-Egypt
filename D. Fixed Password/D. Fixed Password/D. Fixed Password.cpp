#include<iostream>
using namespace std;

int Password = 1999;

int main()
{
	int User_pass;
	cin >> User_pass;
	while ((User_pass != Password))
	{
		cin >> User_pass;
		cout << "Wrong" << endl;
	}
	cout << "Correct" << endl;
}