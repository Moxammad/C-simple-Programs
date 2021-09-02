#include<iostream> 
using namespace std;
int main()
{
	const int size = 100;
	int array[size];

	for (int i = 0; i < 100; i++)
	{
		array[i] = 100 - i;
	}
	for (int i = 0; i < 100; i++)
	{
		cout<< array[i] <<"\t";
	}

	int number;
	bool found = false;
	cout << "search for a number: ";
	cin >> number;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == number)
		{
			found = true;
			cout << "at index " << i;
			break;
		}
	}
	if (found)
	{
		cout << " Element found Successfully" << endl;
	}
	else
	{
		cout << "Element not exist" << endl;
	}
	system("pause");
	return 0;
}
