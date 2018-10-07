#include <iostream>
#include <vector>

using std::cout;
using std::endl;

void call_by_value(std::vector<int> v){
	
	int sum = 0;
	
	for(int n : v){
		sum += n;
	}
	
	cout << sum << endl;
	
}

void call_by_pointer(std::vector<int>* v){
	
	int sum = 0;
	std::cout <<"formal parameter of pointer is "<< &v << std::endl;
	
	for(int n : (*v)){
		sum += n;
	}
	
	cout << sum << endl;
}

void call_by_reference(std::vector<int>& v){
	
	int sum = 0;
	
	for(int n : v){
		sum += n;
	}
	
	cout << sum << endl;
}

int main(void){
	std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};
	call_by_value(vec);
	call_by_pointer(&vec);
	call_by_reference(vec);
}
