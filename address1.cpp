#include <iostream>

int main(void) {
    int v[] {0,1,2,3,4,5};
    std::cout << &v << std::endl;
    std::cout << &v[0] << std::endl;

    int* pt = new int[5];
    std::cout << &pt[0] << std::endl;

    delete [] pt;
}