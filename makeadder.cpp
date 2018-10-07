#include <iostream>
#include <functional>

std::function<int(int, int)> make_adder() {
    int local_var = 10;
    return [local_var](int x, int y)->auto{ return local_var + x + y;};
}

int main(void) {
    int x = 11;
    int y = 12;
    std::cout << make_adder()(x, y) << std::endl;
    std::cout << make_adder()(x, 10) << std::endl;
    std::function<int(int, int)> f = make_adder();
    std::cout << f(x , y) << std::endl;
    std::cout << f(x , 10) << std::endl;
}