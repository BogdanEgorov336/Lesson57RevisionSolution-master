#include "test.h"
#include "util.h"

void print(string name, int* vector, int size, bool check) {

	cout << name << convert_to_string(vector, size)
		<< " ->		" << (check ? "PASS" : "FAIL") << endl;
}

void test01() {

	const int size = 10;
	int vector[size]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int actual;
	print("TEST01", vector, size, 1 == 0);
}