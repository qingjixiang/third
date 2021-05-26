#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 9,1,2,3,4,6,5,7,8,0 };
	int num = sizeof(arr) / sizeof(arr[0]);

	//for (int i = 0; i < num - 1; i++)
	//{
	//	for (int j = 0; j < num - i - 1; j++)
	//	{
	//		if (arr[j] > arr[j + 1])
	//		{
	//			int temp = arr[j + 1];
	//			arr[j + 1] = arr[j];
	//			arr[j] = temp;
	//		}
	//	}
	//}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (arr[i] < arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
}
