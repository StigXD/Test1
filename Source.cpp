#include <iostream>
#include <algorithm>
using namespace std;

void main()
{
	srand(time(0));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10;

	while (true)
	{
		system("cls");
		cout << "1. Show massive" << endl;
		cout << "2. Show massive with index" << endl;
		cout << "3. Sotr by ASC" << endl;
		cout << "4. Sotr by desc" << endl;
		cout << "5. Refull array" << endl;
		cout << "0. Exit" << endl;
		
		int input;
		cin >> input;

		if (input == 0)
			break;

		switch(input)
		{
		case 1:
			for (int i = 0; i < size; i++)
				cout << arr[i] << " ";
			cout << endl;
			system("pause");
		case 2:
			for (int i = 0; i < size; i++)
				cout << "[" << i << "]:" << arr[i] << endl;
			system("pause");
		case 3:
			sort(arr, arr + size);
			break;
		case 4:
			sort(arr, arr + size, [](int a, int b) {return a > b; });
			break;
		case 5:
			for (int i = 0; i < size; i++)
				arr[i] = rand() % 10;
		}
	}
	system("pause");
}