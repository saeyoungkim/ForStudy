#include <iostream>

using namespace std;

template <typename T, typename V>
bool less_than(const T& t, const V& v){
    return t > v;
}

template <typename T>
bool less_than2(const T& t_1, const T& t_2){
    return t_1 > t_2;
}

int main(void) {
    double a = 3.1;
    int b = 3;
    cout << less_than(a,b) << endl;
    cout << less_than<double>(a,b) << endl;
    cout << less_than<int>(a,b) << endl;
}