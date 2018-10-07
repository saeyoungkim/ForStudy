#include <iostream>
#include "linkedlist.h"

using std::cout;
using std::cin;

int main(void){
    LinkedList* llpt = new LinkedList();
    unsigned int en;
    bool rep = true;

    while(rep){
        cout << "1) Insert 2) Print 3) Clear 4) Exit " << " Enter the number : ";
        if(cin >>  en){
            switch(en){
                case 1 :
                    cout << "Please Enter the data which you wanna insert : ";
                
                    int data;
                  if(cin >> data){
                    llpt->Insert(data);
                  }
                  else {
                      cout << "Error code 8 : Unavailiable data will be tried";
                      exit(8);
                  }

                  break;
                case 2 :
                    llpt->Print();
                    break;
                case 3 :
                    llpt->Clear();
                    cout << "datas are all cleared!!" << '\n';
                    break;
                case 4 :
                    cout << "The Loop will be finished !!";
                    rep = false;
                    break;
                default :
                    cout << "Error code 16 : Unavailiable Integer will be entered";
                    exit(16);
            }
        }
    }

    delete llpt;
    cout << "All process will be finished " ;
}