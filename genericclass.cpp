#include <iostream>

using namespace std;

template <typename T>
class Point{
    T x;
    T y;
public:
    Point(T x, T y) {
        this->x = x;
        this->y = y;
    }

    Point() {
        this->x = 0;
        this->y = 0;
    }

    ~Point() {}
    Point(const Point& other) = default;
    Point(Point&& other) = default;
    Point& operator=(const Point& other) = default;
    Point& operator=(Point&& other) = default;

    const T& GetX() const { return this->x; }
    const T& GetY() const { return this->y; }
    void SetX(T x) { this->x = x; }
    void SetY(T y) { this->y = y; }
};

int main() {
    Point<int>* new_point = new Point<int>();
    new_point->SetX(10);
    new_point->SetY(11);
    cout << new_point->GetX() << endl;
    cout << new_point->GetY() << endl;
}