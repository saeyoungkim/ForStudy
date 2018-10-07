#include <iostream>
#include <functional>

int evaluate_1(std::function<int(int, int)> f, int x, int y){
    return f(x,y);
}

int evaluate_2(int (*f)(int, int), int x, int y){
    return (*f)(x,y);
}

int add(int x, int y){
    return x+y;
}

int main(void){
    std::cout << "Please Enter the number : " ;
    int a;
    int x = 6;
    if(std::cin >> a){
        std::cout << "Evaluate1" << std::endl;
        std::cout << evaluate_1(add, a, x) << std::endl;
        std::cout << "Evaluate2" << std::endl;
        std::cout << evaluate_2(&add, a, x) << std::endl;
        std::cout << "Evaluate1 of lambda" << std::endl;
        std::cout << evaluate_1([=](int x, int y)->int{ return a + x;}, x, 0) << std::endl;
        // It can not be possible to convert lambda expression to function pointer
        /*
        std::cout << "Evaluate2 of lambda" << std::endl;
        std::cout << evaluate_2([a](int x, int y)->auto{ return a + x;}, x, 0);
        */
    }
}