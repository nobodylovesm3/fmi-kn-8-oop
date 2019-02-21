#include <iostream>

template <typename T>
void printArray(T arr[], int arrSize) {
	std::cout << "{";
	for (int i = 0; i < arrSize - 1; i++) {
		std::cout << arr[i] << ",";
	}

	if (arrSize > 0) {
		std::cout << arr[arrSize - 1];
	}

	std::cout << "}";
}


template <typename T>
void map(T a[], size_t n, T(*f) (T)) {
	for (size_t i = 0; i < n; i++) {
		a[i] = f(a[i]);
	}
}

int prod2(int x) {
	return x * x;
}

int prod3(int x) {
	return x * x * x;
}


int main() {
	int arr[] = { 25,12,3,13,7,10,50,73,5};
	printArray(arr, 9);

	std::cout << std::endl;
	map(arr, 9, prod2);
	printArray(arr, 9);
	std::cout << std::endl;

	map(arr, 9, prod3);
	std::cout << std::endl;
	printArray(arr, 9);
	std::cout << std::endl;

	return 0;
}

