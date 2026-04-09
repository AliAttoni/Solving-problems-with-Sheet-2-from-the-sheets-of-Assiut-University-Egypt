#include<iostream>
using namespace std;

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number;
}

bool In_Range(int number ,int a, int b)
{
	if (number >= a && number <= b)
		return true;
	else
		return false;
}

void Fill_Array_From_Array(int arr[10000 - 1], int arr2[10000 - 1] , int size)
{
	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		int n = arr[i];
		while (n > 0)
		{
			sum += n % 10;
			n /= 10;
		}
		arr2[i] = sum;
	}
}

int FindTheSum(int arr[10000], int arr2[10000], int size , int a , int b )
{
	int Final_sum = 0;
	for (int i = 0; i < size;i++)
	{
		if (In_Range(arr2[i], a, b))
			Final_sum += arr[i];
	}
	return Final_sum;
}

void Program()
{
	int N, a, b;
	N = ReadNumber();
	a = ReadNumber();
	b = ReadNumber();

	int arr[10000 - 1], arr2[10000 - 1];
	for (int i = 1; i <= N; i++)
		arr[i - 1] = i;

	Fill_Array_From_Array(arr, arr2, N);
	cout << FindTheSum(arr, arr2, N, a, b);
}

int main()
{
	Program();
}