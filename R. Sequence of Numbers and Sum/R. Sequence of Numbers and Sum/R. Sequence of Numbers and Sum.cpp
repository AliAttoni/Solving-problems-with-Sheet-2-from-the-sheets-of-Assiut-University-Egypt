#include<iostream>
using namespace std;


int ReadNumber()
{
	int Number; 
	cin >> Number;
	return Number;
}

void Program()
{
	int N, M, sum = 0;
	do {
		sum = 0;
		N = ReadNumber();
		M = ReadNumber();
		if (N > 0 && M > 0)
		{
			
			if (N > M)
			{
				for (int i = M; i <= N; i++)
				{
					cout << i << " ";
					sum += i;
				}
				cout << "sum =" << sum << endl;;
			}
			else
			{
				for (int i = N; i <= M; i++)
				{
					cout << i << " ";
					sum += i;
				}
				cout << "sum =" << sum << endl;;
			}
		}
	} while (N > 0 && M > 0);
}

int main()
{
	Program();
}