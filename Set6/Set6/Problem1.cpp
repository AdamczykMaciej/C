#include <iostream>

using namespace std;


template <typename T>
int func(const T* arr, int size) {
	T max = arr[0];
	int imax=0;

	for (int i = 1; i < size;i++) {
		if (arr[i] > max) {
			max = arr[i];
			imax = i;
		}

	}
	return imax;
}


int main() {
	int intarr[] = { 1, 2, 3, 4 };
	size_t sizea = sizeof(intarr) / sizeof(*intarr);
	cout<< func(intarr, sizea) << endl;

	double doubarr[] = { 12.2, 2.2 };
	size_t sized = sizeof(doubarr) / sizeof(*doubarr);
	cout << func(doubarr, sized) << endl;

	string strarr[] = { "1235" ,"78" };
	size_t sizes = sizeof(strarr) / sizeof(*strarr);
	cout << func(strarr, sizes)<< endl;
}