#include<iostream>
using namespace std;

char ReadOP()
{
	char OP;
	cin >> OP;
	return OP;
}

int ReadNumber()
{
	int Number; 
	cin >> Number;
	return Number; 
}

void Fill_Array_Element(int arr[50], int size )
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];
}

void Print(char OP, int size, int arr[50])
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j <= arr[i]; j++)
			cout << OP;
		cout << endl;
	}

}

void Program()
{
	char OP = ReadOP();
	int N = ReadNumber();
	int arr[50];
	Fill_Array_Element(arr, N);

	Print(OP, N, arr);
}

int main()
{
	Program();
}