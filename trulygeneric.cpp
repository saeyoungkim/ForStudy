#include <iostream>
#include <vector>
#include <array>
#include <cstdlib>
#include <fstream>
#include <string>

template <typename T>
bool less_than(const T& a, const T& b){
    return a < b;
}

template <typename T>
bool more_than(const T& a, const T& b){
    return a > b;
}

template <typename T>
class Comparer{
    int count_compare;
    int count_swap;
    bool (*comp)(const T&, const T&);

protected:
    virtual bool compare_impl(const T& a, const T& b);
    virtual void swap_impl(T& a, T& b);

public:
    Comparer(bool (*func)(const T&, const T&));
    void reset();
    bool compare(const T& a, const T& b);
    void swap(T& a, T& b);
    int Get_count_compare() { return this->count_compare; }
    int Get_count_swap() { return this->count_swap; }
};

template <typename T>
bool Comparer<T>::compare_impl(const T& a, const T& b){
    return (*comp)(a, b);
}

template <typename T>
void Comparer<T>::swap_impl(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
Comparer<T>::Comparer(bool (*func)(const T&, const T&)){
    this->count_compare = 0;
    this->count_swap = 0;
    comp = func;
}

template <typename T>
void Comparer<T>::reset(){
    this->count_compare = 0;
    this->count_swap = 0;
}

template <typename T>
bool Comparer<T>::compare(const T& a, const T& b){
    this->count_compare++;
    return compare_impl(a,b);
}

template <typename T>
void Comparer<T>::swap(T& a, T& b){
    this->count_swap++;
    swap_impl(a,b);
}

template <typename T>
void print(T begin, T end){
    std::cout << "{ " ;
    if(begin != end){
        auto iter = begin;
        std::cout << *iter;
        iter++;
        while (iter != end){
            std::cout << ", " << *iter;
            iter++;
        }
    }
    std::cout << " }" ;
}

template <typename T>
class LogComparer : public Comparer<T> {
    std::ofstream fout;
protected:
    bool compare_impl(const T& a, const T& b) override;
    void swap_impl(T& a, T& b) override;
public:
    LogComparer(bool (*func)(const T& a, const T& b), const std::string& filename) : Comparer<T>(func){
        fout.open(filename);
        if (!fout.good()){
            std::cout << "There is no file of " << filename << '\n';
            std::cout << "The Error Code 1 : No file available.";
            exit(1);
        }
    }
};

// Method that actually performs the comparison
// Derived classes may override this method
template <typename T>
bool LogComparer<T>::compare_impl(const T& m, const T& n) {
    fout << "Comparing " << m << " to " << n << '\n';
// Base class method does the comparision
    return Comparer<T>::compare_impl(m, n);
}
// Method that actually performs the swap
// Derived classes may override this method
template <typename T>
void LogComparer<T>::swap_impl(T& m, T& n) {
    fout << "Swapping " << m << " and " << n << '\n';
//T temp = m;
//m = n;
//n = temp;
// Base class method does the swap
    Comparer<T>::swap_impl(m, n);
}

template <typename T, typename V>
void selection_sort(T begin, T end, Comparer<V>& cmp){
    for(auto i = begin; i != end-1; i++){
        auto small = i;
        for(auto j = i+1; j != end; j++){
            if(cmp.compare(*j,*small))
                small = j;
        }

        if(small != i){
            std::swap(*small, *i);
        }
    }
}

int main() {
// Make a vector of integers
std::vector<int> vec = { 23, -3, 10, 4, 215, 0, -3, 2 };
std::cout << "Before: ";
print(std::begin(vec), std::end(vec));
std::cout << '\n';
LogComparer<int> lt(less_than<int>, "upsort.log");
selection_sort(std::begin(vec), std::end(vec), lt);
std::cout << "Ascending: ";
print(std::begin(vec), std::end(vec));
std::cout << " (" << lt.Get_count_compare() << " comparisons, "
<< lt.Get_count_swap() << " swaps)\n";
LogComparer<int> gt(more_than<int>, "downsort.log");
selection_sort(std::begin(vec), std::end(vec), gt);
std::cout << "Descending: ";
print(std::begin(vec), std::end(vec));
std::cout << " (" << gt.Get_count_compare() << " comparisons, "
<< gt.Get_count_swap() << " swaps)\n";
std::cout << "--------------------------------------\n";
// Make a vector of string objects
std::vector<std::string> words{"tree", "girl", "boy", "dog",
"cat", "girl", "bird"};
// Make a working copy of the original vector
std::cout << "Before: ";
print(std::begin(words), std::end(words));
std::cout << '\n';
LogComparer<std::string> wlt(less_than<std::string>, "upwords.log");
selection_sort(std::begin(words), std::end(words), wlt);
std::cout << "Ascending: ";
print(std::begin(words), std::end(words));
std::cout << " (" << wlt.Get_count_compare() << " comparisons, "
<< wlt.Get_count_swap() << " swaps)\n";
LogComparer<std::string> wgt(more_than<std::string>, "downwords.log");
selection_sort(std::begin(words), std::end(words), wgt);
std::cout << "Descending: ";
print(std::begin(words), std::end(words));
std::cout << " (" << wgt.Get_count_compare() << " comparisons, "
<< wgt.Get_count_swap() << " swaps)\n";
std::cout << "--------------------------------------\n";
// Make an array of integers
int arr[] = { 23, -3, 10, 4, 215, 0, -3, 2 };
std::cout << "Before: ";
print(arr, arr + 8);
std::cout << '\n';
LogComparer<int> lt2(less_than<int>, "upsort2.log");
selection_sort(arr, arr + 8, lt2);
std::cout << "Ascending: ";
print(arr, arr + 8);
std::cout << " (" << lt2.Get_count_compare() << " comparisons, "
<< lt.Get_count_swap() << " swaps)\n";
LogComparer<int> gt2(more_than<int>, "downsort2.log");
selection_sort(arr, arr + 8, gt2);
std::cout << "Descending: ";
print(arr, arr + 8);
std::cout << " (" << gt2.Get_count_compare() << " comparisons, "
<< gt.Get_count_swap() << " swaps)\n";
}