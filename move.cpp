#include <iostream>
#include <vector>

using namespace std;

struct X {
private:
    int num;
    static int ct;

public:
    X() : num(ct++){
        cout << num << " : X constructor is called!!" << endl;
    }

    ~X() {
        cout << num << " : X destructor is called!!" << endl;
    }
};

int X::ct = 1; 

int main() {
    vector<X> x_v;
    x_v.emplace_back(X());
}