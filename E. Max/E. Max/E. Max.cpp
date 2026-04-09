#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int N; 
	cin >> N;
	vector <int> Numbers;
	int m;
	cin >> m;
	Numbers.push_back(m);
	for (int i = 1; i < N; i++)
	{
		cin >> m;
		if (m > Numbers[0])
			swap(m, Numbers[0]);
	}
	cout << Numbers[0];
}