#include <iostream>

using std::cout;

int f1(int n){
    n += 6;
    return n;
}

int f2(int* n){
    *n += 6;
    return *n;
}

int& f3(int* n){
    *n += 6;
    return *n;
}

int* g(int* n){
    *n += 6;
    return n;
}

int& h(int& n){
    n += 6;
    return n;
}

int main(void){
    int x = 6;
    int* ptr = &x;
    cout << f1(x) << '\n';
    cout << f2(ptr) << '\n';
    cout << f3(ptr) << '\n';
    cout << (*g(ptr)) << '\n';
    cout << h(x) << '\n';
}