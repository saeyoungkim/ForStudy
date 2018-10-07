#include <iostream>
#include <vector>
#include <string>

template <typename T>
bool is_ascending(const std::vector<T>& v){
    for(size_t t = 0; t < v.size()-1; t++){
        if(v[t] <= v[t+1])   continue;
        else return false;
    }

    return true;
}

int main() {
    std::vector<int> x_1{-9,-5,-1,3,4,6,8,10,11};
    std::cout << is_ascending(x_1) << std::endl;
    std::vector<double> x_2{-1.4, 0.0, 2.1, 3.5, 2.3};
    std::cout << is_ascending(x_2) << std::endl;
    std::vector<std::string> x_3{"ABC", "ACD", "AEX", "CFQ"};
    std::cout << is_ascending(x_3) << std::endl;
    std::vector<std::string> x_4{"XYOO", "ACHOO"};
    std::cout << is_ascending(x_4) << std::endl;
}