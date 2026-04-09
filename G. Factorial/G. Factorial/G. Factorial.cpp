#include<iostream>
#define ll long long
using namespace std;

ll Factorial(int N)
{
	if (N == 0)
		return 1;
	else if (N == 1)
		return 1;
	else
		return N*Factorial(N - 1) ;
}
int main()
{
	int Test_Cases = 0;
	cin >> Test_Cases;

	for (int i = 1; i <= Test_Cases; i++) {
		int N;cin >> N;
		cout << Factorial(N) << endl;
	}
}