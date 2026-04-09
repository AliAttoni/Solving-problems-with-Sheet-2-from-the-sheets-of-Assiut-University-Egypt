#include<iostream>
#define ll long long 
using namespace std;

int main()
{
	ll count = 0;
	int K, S;
	cin >> K >> S;
	for ( int i = 0 ; i <= K ; i++ )
		for (int j = 0; j <= K; j++)
		{
			ll z = S - i - j;
			if (z >= 0 && z <= K)
				count++;
	}
	cout << count;
}