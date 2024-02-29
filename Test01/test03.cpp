#include <iostream>

using namespace std;

void test01(int array[], int size) {
	array[0] = 10;
	*(array + 0) = 10;
}
void test02(int* array, int size) {
	array[0] = 10;
	*(array + 0) = 10;
}

int main() {

	const int size = 10; 

	int array[size];

	//cout << array << endl;
	//cout << &array[0] << endl;

	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 100;
	}

	for (int j = 0; j < size; j++)
	{
		cout << *(array - j) << " ";
	}

	cout << endl;

	for (int k = size - 1; k >= 0; k--)
	{
		cout << *(array + k) << " ";
	}


	return 0;
}