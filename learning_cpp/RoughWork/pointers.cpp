#include<iostream>
using namespace std ;
int main(){
	int var = 8 ; 

	int* ptr = &var; 

	cout<<ptr<<endl;

	cout<<*ptr; // this  is dereferencing
	return 0 ;
}

