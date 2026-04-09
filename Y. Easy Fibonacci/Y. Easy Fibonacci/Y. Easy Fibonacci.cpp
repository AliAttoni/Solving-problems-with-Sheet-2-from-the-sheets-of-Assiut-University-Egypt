#include<iostream>
#define ll long long 
using namespace std;

ll ReadNumber()
{
	ll Number;
	cin >> Number;
	return Number;
}

void Fibo(ll n)
{
	ll FirstNumber = 0;
	ll SecondNumber = 1;
	if (n == 1)
		cout << 0;
	else 
	cout << FirstNumber << " " << SecondNumber << " ";
	for (int i = 3; i <= n;i++)
	{
		ll ThirdNumber = FirstNumber + SecondNumber;
		cout << ThirdNumber << " ";
		FirstNumber = SecondNumber;
		SecondNumber = ThirdNumber;
	}
}

void Program()
{
	long long n = ReadNumber();

	Fibo(n);
}
int main()
{
	Program();
}