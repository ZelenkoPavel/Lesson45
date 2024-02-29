#include <iostream>
#include <string>
#include <ctime>

using namespace std;


void random_init(int* vector, int size, int max, int min) {
	srand(time(NULL));
	if (min > max) {
		int t = min;
		min = max;
		max = t;
	}
	for (int i = 0; i < size; i++) {
		*(vector + i) = rand() % (max - min + 1) + min;
	}
}

string convert_to_string(int* vector, int size) {
	string msg = "";

	for (int i = 0; i < size; i++) {

		msg += to_string(*(vector + i)) + " ";

	}

	return msg;
}