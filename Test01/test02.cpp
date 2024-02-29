//#include <iostream>
//
//using namespace std;
//
//
//int main() {
//
//	int size;
//
//	do {
//		system("cls");
//		cout << "Input size array: ";
//		cin >> size;
//	} while (size <= 0);
//
//	int* const array = new int[size];
//	int* first = array;
//
//	for (int i = 0; i < size; i++)
//	{
//		*(array + i) = rand() % 100;
//	}
//
//	for (int j = 0; j < size; j++)
//	{
//		cout << *(array - j) << " ";
//	}
//	cout << endl;
//
//	for (int k = size - 1; k >= 0; k--)
//	{
//		cout << *(array + k) << " ";
//	}
//
//
//	delete[] array;
//	delete first;
//	return 0;
//}