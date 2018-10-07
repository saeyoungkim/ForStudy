#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
bool is_member(const T& com, const std::vector<T>& vec){
    for(auto& elem : vec)
        if(com == elem) return true;
    
    return false;
}

template <typename T>
void Judge(const std::vector<T>& vec){
    T com_tmp;
    cout << "pleases Enter the value : ";
    if(cin >> com_tmp){
        if(is_member(com_tmp, vec))
            cout << com_tmp << " is founded!!" << endl;
        else 
            cout << com_tmp << " is not founded!!" << endl;
    }
    else {
        cout << "Error code 8 : Value is not availiable!!" ;
        exit(8);
    }
}

int main(void) {
    std::vector<int> x_1{1,2,3,4,5,6,7,8,9,10};
    Judge(x_1);
    std::vector<double> x_2{1.0, 2.0, 3.0, 4.1, 5.0, 6.2, 7.5, 8.3, 9.1};
    Judge(x_2);
    std::vector<std::string> x_3{"I", "hate", "you"};
    Judge(x_3);
}