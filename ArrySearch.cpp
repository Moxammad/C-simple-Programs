#include<iostream> 
using namespace std;
int main()
{
	const int size = 100;
	int sumOfEven = 0;
	int sumOfOdd = 0;
	int array[size];

	for (int i = 0; i < 100; i++)
	{
		array[i] = 100 - i;
	}
	for (int i = 0; i < 100; i++)
	{
		cout<< array[i] <<"\t";

		if (array[i]%2==0)
		{
			sumOfEven += array[i];
		}else
		{
			sumOfOdd += array[i];
		}

	}

	cout << endl <<"Sum of Even= "<< sumOfEven <<endl;
	cout << "Sum of Odd= " << sumOfOdd << endl;

	int number;
	bool found = false;
	cout << "search for a number: ";
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == number)
		{
			found = true;
			cout << number << " found successfully at index " << i << endl;
			break;
		}
	}
	if (!found)
	{
		cout << "Element not exist" << endl;
	}
	system("pause");
	return 0;
}
