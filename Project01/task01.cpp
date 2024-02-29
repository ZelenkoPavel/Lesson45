#include <iostream>

using namespace std;

void random_init(int*, int, int, int);
string convert_to_string(int*, int);

void finding_product_and_sum_number(int*, int, int&, int&);

int main() {

	int size;
	int min, max;

	do {
		system("cls");
		cout << "Input size of array, min and max number: ";
		cin >> size >> min >> max;
	} while (size <= 0);

	int* vector = new int[size];

	random_init(vector, size, min, max);

	cout << convert_to_string(vector, size) << endl;


	int product_even_number = 1;
	int sum_number = 0;

	finding_product_and_sum_number(vector, size, product_even_number, sum_number);

	cout << "Product even number = " << product_even_number << endl;
	cout << "Sum number located between the first and last zero elements = " 
		<< sum_number << endl;

	delete[] vector;

	return 0;
}