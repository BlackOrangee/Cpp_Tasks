#pragma once
using namespace std;

void task2()
{
	int size = 20;
	char* str = new char[size];
	cin >> str;
	int* arr = new int[size];

	for (int i = 0; i < size; i++)
	{
		if (str[i] == 'I')
		{
			arr[i] = 1;
		}
		else if (str[i] == 'V')
		{
			arr[i] = 5;
		}
		else if (str[i] == 'X')
		{
			arr[i] = 10;
		}
		else if (str[i] == 'L')
		{
			arr[i] = 50;
		}
		else if (str[i] == 'C')
		{
			arr[i] = 100;
		}
		else if (str[i] == 'D')
		{
			arr[i] = 500;
		}
		else if (str[i] == 'M')
		{
			arr[i] = 1000;
		}
		else if (str[i] == '\0')
		{
			size = i + 1;
			break;
		}
	}
	int sum = 0;
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			sum += arr[i + 1];
			sum -= arr[i];
		}
		else if (arr[i] > arr[i + 1])
		{
			sum += arr[i];
			sum += arr[i + 1];
		}
		i++;
	}
	cout << sum;
}