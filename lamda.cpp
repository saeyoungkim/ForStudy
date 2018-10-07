#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> vec(10);
    int i = 0;
    for(auto iter = vec.begin(); iter != vec.end(); iter++){
        *iter = i;
        ++i;
    }
    
    int a = 5;
    int sum = 0;
    auto result_1 = [&]()->int{
        std::cout << "Pleases Enter the number of a : ";
        std::cin >> a;
        for(auto iter = vec.begin(); iter != vec.end(); iter++){
            sum = sum + *iter + a;
        }
        return sum; 
    };

    std::cout << result_1() << std::endl;
}