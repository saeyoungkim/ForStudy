#include <iostream>

class RVO
{
public:
    RVO()
    {
        std::cout << "I am in constructor\n" ;
    }

    RVO (const RVO& c_RVO) 
    {
        std::cout << "I am in copy constructor\n";
    }
    ~RVO()
    {
        std::cout << "I am in destructor\n" ;
    }

    int mem_var;       
};

RVO MyMethod (int i)
{
    RVO rvo;
    rvo.mem_var = i;
    return (rvo);
}

int main(void)
{
    RVO rvo;
    rvo = MyMethod(5);
}