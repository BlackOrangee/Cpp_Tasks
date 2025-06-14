#pragma once
using namespace std;

void Print_arr(int* arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

void task1()
{
	int size = 10;
	int* arr = new int[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}

	int targert = 0;
	cout << "enter target";
	cin >> targert;
	int num_1 = 0;
	int num_2 = 0;

	for (int i = 0; i < size; i++)
	{
		int sum = 0;
		for (int j = i; j < size; j++)
		{
			sum =+ arr[j];
			if (sum < targert)
			{

			}
			else if(sum == targert)
			{
				num_1 = arr[i];
				num_2;
				//break;
			}
		}
	}
	
	
	cout << num_1 << ", " << num_2;
}
