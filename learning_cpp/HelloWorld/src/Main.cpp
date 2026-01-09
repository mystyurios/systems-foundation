#include<iostream>
using namespace std ; 
void log(const char*);

int multiply(int a , int b){
    log("multiply");
    return a * b; 
}

int main(){
    cout << "Hello world!" <<endl;
    log("using declaration to use function in this program");
    cout << multiply(5,3)<<endl;
  //  std::cin.get(); used for the console in windows to stay a little bit longer 
    return 0 ;
}