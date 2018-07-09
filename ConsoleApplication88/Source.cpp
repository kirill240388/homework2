#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char symbol;
	cout << "Vvedite simvol" << endl;
	cin >> symbol;
	int size, pos;
	cout << "Vyberite razmer treugolnika" << endl;
	cin >> size;
	cout << "Vyberite orientaciyu treugolnika" << endl;
	cin>>pos;
	if (pos == 1)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i <= j)
					cout <<symbol;
				else
					cout << ' ';
			}
			cout << endl;
		}
	}
	if (pos == 2)
	{
		for (int i = 0; i < size; i++) 
		{
			for (int j = 0; j < size; j++)
			{
				if (i <= j)
					cout << ' ';
				else
					cout <<symbol;
			}
			cout << endl;
		}
	}
	if (pos == 3)
	{
		for (int i = 0; i < size; i++) 
		{
			for (int j = 0; j < size; j++)
			{
				if (i <= j)
					cout <<symbol;
			}
			cout << endl;
		}
	}
	if (pos == 4)
	{
		size = size / 2;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i <= j)
					cout << ' ';
				else
					cout << symbol;
			}
			cout << endl;
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				if (i <= j)
					cout << symbol;
			}
			cout << endl;
		}
	}
	
}