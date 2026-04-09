#include<iostream>
using namespace std;

short Read_Test_Cases()
{
	short Test;
	cin >> Test;
	return Test;
}

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number; 
}
/*
void Fill_ArrayElement(int n , int &count , int arr[10])
{
	while (n > 0)
	{
		arr[count] = n % 10;
		n /= 10;
		count++;
	}
}

void Print_Arr(int arr[10], int size)
{
	for (int i = 0; i < size;i++)
	{
		cout << arr[i] << " ";
	}
}

void Program()
{
	short T = Read_Test_Cases();

	for (int i = 1;i <= T;i++)
	{
		int count = 0;
		int n = ReadNumber();
		int arr[10];
		Fill_ArrayElement(n, count, arr);

		Print_Arr(arr, count);
		cout << endl;
	}
}
*/



int main()
{
	int n = ReadNumber();
	for (int j = 1; j <= n;j++) {
		string s;
		cin >> s;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			cout << s[i] << " ";
		}
		cout << endl;
	}
}