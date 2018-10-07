#include <iostream>
#include <vector>

int main(void) {
	int arr[] = {10, 20, 30, 40, 50, 60};
	int* p = &arr[0];
	for(auto iter = std::begin(arr); iter != std::end(arr); iter++){
		std::cout << *p << ' ';
		p++;
	}
}