#include <iostream>

using std::cout;
using std::cin;

int large(int & p, int & q){
    if (p > q) 
        return p;
    else 
        return q;
}

int& large2(int & p, int & q){
    if (p > q)
        return p;
    else
        return q;
}

int mul(const int& x){
    cout << &x << std::endl;
    return 10 * x;
}

int main(void) {
    cout << "Pleases Enter the two numbers : ";
    int p_1 , q_1;
    cin >> p_1;
    cin >> q_1;
    int p_3, p_2, q_3, q_2;
    int p_4 = p_3 = p_2 = p_1;
    int q_4 = q_3 = q_2 = q_1;

    int x_1 = large(p_1 , q_1);
    p_1 = 1001;
    cout << "x_1 : " << x_1 << '\n';
    cout << "p_1 : " << p_1 << '\n';
    cout << "q_1 : " << q_1 << '\n';

    int&& x_2 = large(p_2, q_2);
    p_2 = 1002;
    cout << "x_2 : " << x_2 << '\n';
    cout << "p_2 : " << p_2 << '\n';
    cout << "q_2 : " << q_2 << '\n';

    int x_3 = large2(p_3, q_3);
    p_3 = 1003;
    cout << "x_3 : " << x_3 << '\n';
    cout << "p_3 : " << p_3 << '\n';
    cout << "q_3 : " << q_3 << '\n';    

    int& x_4 = large2(p_4, q_4);
    p_4 = 1004;
    cout << "x_4 : " << x_4 << '\n';
    cout << "p_4 : " << p_4 << '\n';
    cout << "q_4 : " << q_4 << '\n'; 

    int x_5 = 3;
    cout << &x_5 << std::endl;
    cout << mul(x_5 + 5) << std::endl;

}