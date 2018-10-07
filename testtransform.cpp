#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int& f(int &n){
    n *= 2; 
    return n;
}

template <typename T>
void print(T begin, T end){
    std::cout << "Print Start" << std::endl;
    std::for_each(begin, end, [](int n)->void{ std::cout << n << std::endl; });
    std::cout << "Print End" << std::endl;
}

int main(void){
    const int SIZE = 20;

    std::vector<int> vec_1(SIZE);
    std::iota(vec_1.begin(), vec_1.end(), 1);
    std::for_each(std::begin(vec_1), std::end(vec_1), [](int& n)->void{ std::cout << n << std::endl; });
    
    std::vector<int> vec_2(SIZE);
    std::copy<std::vector<int>::iterator, std::vector<int>::iterator>(vec_1.begin(), vec_1.end(), vec_2.begin());
    std::for_each(vec_2.begin(), vec_2.end(), [](int x)->void{ std::cout << x << '\n'; });

    std::vector<int> vec_3(SIZE);
    std::transform(vec_1.begin(), vec_1.end(), vec_3.begin(), &f);
    print(vec_1.begin(), vec_1.end());
    print(vec_3.begin(), vec_3.end());

    std::vector<int> vec_4(SIZE);
    std::transform(vec_1.begin(), vec_1.end(), vec_4.begin(), [](int n) { return (2 * n);});
    print(vec_4.begin(), vec_4.end());

    for_each(vec_1.begin(), vec_1.end(), [](int & n) { n += 3;});

    print(vec_1.begin(), vec_1.end());
    print(vec_3.begin(), vec_3.end());
}