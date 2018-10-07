#include <iostream>
#include <iterator>
#include <algorithm>

void f(int (&a)[]){
    a[0] = 2;
    a[1] = 3;
    a[2] = 4;
}

int main(){
    int array[10];
    int (&array_ref)[10] = array;
    std::cout << &array << std::endl;
    std::cout << &array_ref << std::endl;
    std::cout << &array[0] << std::endl;

    int *a_1[5];
    int (*a_2)[5];
    int b[5] = {1,2,3,4,5};
    int *a_3;
    a_1[0] = &b[0];
    a_2 = &b;
    a_3 = &b[0];

    std::cout << a_3 << std::endl;
    std::cout << &b[0] << std::endl;
    std::cout << &a_3 << std::endl;

    std::cout << a_2 << std::endl;
    std::cout << *a_2 << std::endl;
    std::cout << &b << std::endl;
    std::cout << &a_2 << std::endl;

    std::cout << b << std::endl;
    std::cout << *b << std::endl;

    std::cout << *(&b[0]) << std::endl;
    std::cout << *(&b) << std::endl;
    std::cout << *(*(&b)) << std::endl;
    for(int i = 0; i < 5; i++){
        *(*a_2 + i) = 10;
    }
    for(int i = 0; i < 5; i++){
        std::cout << b[i] << std::endl;
    }
    for(int i = 0; i < 5; ++i){
        std::cout << *(a_3 + i) << std::endl;
    }
}