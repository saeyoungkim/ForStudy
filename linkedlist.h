#include <iostream>

using std::cout;

class LinkedList{
    
    struct Node {
        int data;
        Node* next;
        Node(int n) : data(n), next(nullptr) { 
            cout << "Generating data : " << data << " (" << reinterpret_cast<uintptr_t>(this) << ") " << '\n';
        };
        ~Node() {
            cout << "Destroying data : " << data << " (" << reinterpret_cast<uintptr_t>(this) << ") " << '\n';
        };
    };

    Node* head;
    Node* tail;
    int length;

public:

    LinkedList();
    ~LinkedList();
    LinkedList(const LinkedList& other);
    LinkedList(LinkedList&& tmp);

    LinkedList& operator=(const LinkedList& other);
    LinkedList& operator=(LinkedList&& tmp);

    void Insert(int data);
    void Clear();
    void Print() const;
    int GetLength() const;
    
};