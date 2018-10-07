#include <iostream>
#include "ex19-3.h"

template <typename T>
bool same(const T& a, const T& b){
    if (a == b){
        std::cout << "SAME" << std::endl;
        return true;
    }
    else {
        std::cout << "NO SAME" << std::endl;
        return false;
    }
}

template <typename T>
bool unsame(const T& a, const T& b){
    if (a != b){
        std::cout << "UNSAME" << std::endl;
        return true;
    }
    else {
        std::cout << "NO UNSAME" << std::endl;
        return false;
    }
}

int main() {
    bool done = false;
    char command;
    int value;

    LinkedList<int> list; // Instantiated for integers

    while (!done) {
        std::cout << "I)nsert <item> D)elete <item> A)prepend <item> P)rint L)ength E)rase Q)uit >>";
        std::cin >> command;
        switch (command) {
            case 'I': // Insert a new element into the list
            case 'i':
                if (std::cin >> value)
                    list.insert(value);
                else
                    done = true;
                break;

            case 'D': // Insert a new element into the list
            case 'd':
                if (std::cin >> value)
                    if (list.remove(value))
                        std::cout << value << " removed\n";
                    else
                        std::cout << value << " not found\n";
                else
                    done = true;
                break;

            case 'A':
            case 'a':
                if (std::cin >> value)
                    list.prepend(value);
                else
                    done = true;
                break;

            case 'P': // Print the contents of the list
            case 'p':
                list.print();
                break;

            case 'L': // Print the list's length
            case 'l':
                std::cout << "Number of elements: " << list.length() << '\n';
                break;

            case 'E': // Erase the list
            case 'e':
                list.clear();
                break;

            case 'Q': // Exit the loop (and the program)
            case 'q':
                done = true;
                break;
        }
    }

    done = false;
    LinkedList<int> list_2; // Instantiated for integers

    while (!done) {
        std::cout << "I)nsert <item> D)elete <item> A)prepend <item> P)rint L)ength E)rase Q)uit >>";
        std::cin >> command;
        switch (command) {
            case 'I': // Insert a new element into the list
            case 'i':
                if (std::cin >> value)
                    list_2.insert(value);
                else
                    done = true;
                break;

            case 'D': // Insert a new element into the list
            case 'd':
                if (std::cin >> value)
                    if (list_2.remove(value))
                        std::cout << value << " removed\n";
                    else
                        std::cout << value << " not found\n";
                else
                    done = true;
                break;

            case 'A':
            case 'a':
                if (std::cin >> value)
                    list_2.prepend(value);
                else
                    done = true;
                break;

            case 'P': // Print the contents of the list
            case 'p':
                list_2.print();
                break;

            case 'L': // Print the list's length
            case 'l':
                std::cout << "Number of elements: " << list_2.length() << '\n';
                break;

            case 'E': // Erase the list
            case 'e':
                list_2.clear();
                break;

            case 'Q': // Exit the loop (and the program)
            case 'q':
                done = true;
                break;
        }
    }

    if(same(list, list_2)){
        std::cout << "The Two Lists are same things" << '\n';
    }
    else if(unsame(list, list_2)){
        std::cout << "The Two Lists are different things" << '\n';
    }

}