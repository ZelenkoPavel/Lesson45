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
//	int* array = new int[size];
//	int* first = array;
//
//	for (int i = 0; i < size; i++)
//	{
//		*(array++) = rand() % 100;
//	}
//
//	for (int j = 0; j < size; j++)
//	{
//		cout << *(--array) << " ";
//	}
//	cout << endl;
//
//	for (int k = 0; k < size; k++)
//	{
//		cout << *(--array) << " ";
//	}
//
//	delete[] array;
//	delete first;
//
//	return 0;
//}