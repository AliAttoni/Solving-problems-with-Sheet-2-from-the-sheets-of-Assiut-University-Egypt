#include<iostream>
using namespace std;
/*
Even: 3
Odd: 2
Positive: 1
Negative: 3
*/

int ReadNumber()
{
	int Number;
	cin >> Number;
	return Number; 
}

bool If_Number_Even(int n)
{
	if (n % 2 == 0)
		return true;
	else
		return false;
}

bool IF_Number_Positive(int n)
{
	if (n > 0)
		return true;
	else {
		if ( n != 0 )
		return false;
	}
	
}

void Counter( int &Count_Positive , int &Count_Negative ,int &Count_Even ,int &Count_Odd ,int size , int arr[])
{
	int zero_Count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
			zero_Count++;
		if (IF_Number_Positive(arr[i]))
			Count_Positive++;
		else
			Count_Negative++;
		if (If_Number_Even(arr[i]))
			Count_Even++;
		else
			Count_Odd++;

	}
	Count_Positive -= zero_Count;
}

void Fill_Array_Element( int arr[] , int size )
{
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i]; 
	}
}

void Display_Result(int Count_Positive, int Count_Negative, int Count_Even, int Count_Odd)
{
	cout << "Even: " << Count_Even << endl;
	cout << "Odd: " << Count_Odd << endl;
	cout << "Positive: " << Count_Positive << endl;
	cout << "Negative: " << Count_Negative << endl;
}

void Program()
{
	int n; 
	n = ReadNumber();

	int arr[1000];

	Fill_Array_Element(arr, n);

	int Count_Positive = 0, Count_Negative = 0, Count_Even = 0, Count_Odd = 0;

	Counter(Count_Positive, Count_Negative, Count_Even, Count_Odd,n , arr);

	Display_Result(Count_Positive, Count_Negative, Count_Even, Count_Odd);

}
int main()
{
	Program();
	
}
/*#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int arr_N[1000];

	for (int i = 0; i < N; i++)
		cin >> arr_N[i];

	int Counter_Positive = 0, Counter_Negative = 0, Counter_Even = 0, Counter_Odd = 0; 
	for (int i = 0; i < N; i++)
	{
		if (arr_N[i] > 0)
			Counter_Positive++;
		else if (arr_N[i] != 0)
			Counter_Negative++;
		if (arr_N[i] % 2 == 0)
			Counter_Even++;
		else
			Counter_Odd++;
	}

	cout << "Even: " << Counter_Even << endl;
	cout << "Odd: " << Counter_Odd << endl;
	cout << "Positive: " << Counter_Positive << endl;
	cout << "Negative: " << Counter_Negative << endl;
}*/