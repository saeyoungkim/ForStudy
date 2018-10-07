#include <iostream>

using namespace std;

int main() {
    const char* ch = new char[100];
    ch = "Oishii";
    cout << &ch << endl;
    cout << &ch[0] << endl;
    cout << ch[0] << endl;
    cout << ch << endl;
}