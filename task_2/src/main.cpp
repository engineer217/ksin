#include <iostream>
#include "percent.hpp"

using namespace std;

void print(int z){
	cout<<z<<endl;
}

int main(int argc, char** args) {
	int a,b;
	cout<< "input first number <x1>: "; 
	cin>>a;
	cout<< "input second number <x2>: ";
	cin>>b;
	print(percent(a,b));
	return 0;
}


int percent(int x, int y){
	return (x%y);
}


