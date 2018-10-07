#include <iostream>
#include <vector>
#include <queue>
#include <string>

class Message{
    int rank;
    std::string text;
public:
    Message(const std::string& t, int r) : text(t), rank(r) {}
    int GetRank() const{ return this->rank; }
    std::string GetText() const{ return this->text; }
};

struct Cmp {
    bool operator()(const Message& m1, const Message& m2){
        return m1.GetRank() < m2.GetRank();
    }
};

int main() {
    std::priority_queue<Message, std::vector<Message>, Cmp> queue;
    queue.push({"Fuck you", 5});
    queue.push({"I kill you", 6});
    queue.push({"I love you", 0});
    queue.push({"I hate you", 3});

    const Message* q_t = &queue.top();

    while(!queue.empty()){
        std::cout << q_t->GetText() << " " << q_t->GetRank() << '\n';
        queue.pop();
        q_t = &queue.top();  
    }
}