#include "util.h"

void init(int* vector, int n, int a, int b) {

	for (int i = 0; i < n; i++) {

		vector[i] == rand() % (b - a) + a + 1;
	}
}

string convert_to_string(int* vector, int n) {

	string str = "";

	for (int i = 0; i < n; i++) {

		str += to_string(vector[i]) + " ";
	}

	return str;
}