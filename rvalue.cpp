#include <iostream>

using namespace std;

int& sum(int &a, int &b){
    a = a+b;
    return a;
}

int mul(int a, int b){
    return a*b;
}

int main(void) {
    int a = 5;
    int b = 4;
    std::cout << mul(sum(a, b), b) << std::endl;
}