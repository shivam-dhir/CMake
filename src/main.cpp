#include <iostream>
#include "math_utils.hpp"

int main(){
	int x = 3;
	int* p = new int(69);
	
	std::cout << "x address: " << &x << std::endl;
	std::cout << "p address: " << p << std::endl;
	
	delete p;
	return 0;
}
