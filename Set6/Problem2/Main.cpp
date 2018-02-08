#include <iostream>
#include <string>
template <typename T>
T maxRekur(const T* arr, size_t size) {
	
	
	if (size==1) return arr[0];
	T max = maxRekur(arr+1, size-1);
	if ( max > arr[0]) return max;
	else return arr[0];
	
}
int main() {
	size_t size;
	int ai[]{ 7,4,2,6,3,2,5 };
	size = sizeof(ai) / sizeof(*ai);
	std::cout << maxRekur(ai, size) << " ";
	double ad[]{ 1,4,8,6,3 };
	size = sizeof(ad) / sizeof(*ad);
	std::cout << maxRekur(ad, size) << " ";
	std::string as[]{ "A","D","B","F","E","H" };
	size = sizeof(as) / sizeof(*as);
	std::cout << maxRekur(as, size) << std::endl;
}