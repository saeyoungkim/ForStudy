#include <iostream>
#include <ostream>
#include <vector>
#include <iterator>
#include <string>

int main(void){
    std::ofstream fout;
    std::string& filename = "copytostream.log";
    fout.open(filename);

    if(!fout.good()){
        std::cout << "It cannot be possible to open the file : " << filename << std::endl;
        std::cout << "Error code 2 : Unavailable to open File";
        exit(2);
    }
}