#include<iostream>

void log(const char*);

int main(){
    std::cout << "Hello world!" <<std::endl;
    log("using declaration to use function in this program");
    std::cin.get();
    return 0 ;
}