#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    int sum = 0;
    std::vector<int> vec{5, 22, 6, -3, 8, 4};
    for_each(std::begin(vec), std::end(vec), [&sum](auto x) { sum += x; });
    std::cout << "The sum is " << sum << '\n';

    std::vector<int> vec_2(30);
    const int N = 3;
    std::iota(vec_2.begin(), vec_2.end(), N);
    for_each(vec_2.begin(), vec_2.end(), [](int x)->void{
        std::cout << x << std::endl;
    });
}