#include "linkedlist.h"
#include <utility>

using std::cout;

    LinkedList::LinkedList(){
        head = nullptr;
        tail = nullptr;
        length = 0;
    }

    LinkedList::~LinkedList(){
        Clear();
    }

    void LinkedList::Insert(int data){
        LinkedList::Node* pt_n = new Node(data);
        if(tail){
            tail->next = pt_n;
            tail = pt_n;
        }
        else{
            head = tail = pt_n;
        }
        ++length;
    }

    LinkedList::LinkedList(const LinkedList& other) : LinkedList() {
        for(auto cursor = other.head; cursor; cursor = cursor->next)
            this->Insert(cursor->data);
    }

    LinkedList::LinkedList(LinkedList&& tmp) : LinkedList() {
        std::swap(this->head, tmp.head);
        std::swap(this->tail, tmp.tail);
        std::swap(this->length, tmp.length);
    }

    LinkedList& LinkedList::operator=(const LinkedList& other){
        LinkedList tmp{other};
        std::swap(this->head, tmp.head);
        std::swap(this->tail, tmp.tail);
        std::swap(this->length, tmp.length);

        return *this;
    }

    LinkedList& LinkedList::operator=(LinkedList&& tmp){
        std::swap(this->head, tmp.head);
        std::swap(this->tail, tmp.tail);
        std::swap(this->length, tmp.length);

        return *this;
    }

    void LinkedList::Clear(){
        auto cursor = head;
        while(cursor) {
            auto temp = cursor;
            cursor = cursor->next;
            delete temp;
        }

        head = tail = nullptr;
    }

    void LinkedList::Print() const {
        if(head){
            auto cursor = head;
            int count = 1;
            while(cursor){
                cout << count << "`s data : " << cursor->data << '\n';
                cursor = cursor->next;
                ++count;
            }
        }
        else {
            cout << "There is Nothing data" << '\n';
        }
    }

    int LinkedList::GetLength() const {
        return this->length;
    }

