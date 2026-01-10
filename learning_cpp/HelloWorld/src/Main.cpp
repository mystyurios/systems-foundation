#include<iostream>
#include "Log.h"
#include<string>
using namespace std ; 
void log(const char*);

// int multiply(int a , int b);{
//     log("multiply");
//     return a * b; 
// }
void multiplyAndlog(int a , int b){
  cout<<multiply(a,b)<<endl;
}

int main(){
    cout << "Hello world!" <<endl;
    log("using declaration to use function in this program");
    multiplyAndlog(3,2);
    multiplyAndlog(8,5);
    multiplyAndlog(90,45);
  //  std::cin.get(); used for the console in windows to stay a little bit longer
    cout<<"enter password : "<<endl;
    string password ;
    cin >> password ;
    cout<<endl;
    if (password == "1234"){
      cout<<"password is correct "<<endl;
    }
    else
    {
      cout << "error!" <<endl;
    }
    return 0 ;
}
