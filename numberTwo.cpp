#include <iostream>


int main() {
	int num;
	std::cout<<"Введіть число: "<<std::endl;
	std::cin>> num;


	 if (num > 0) {
		 std::cout<< "Chislo dodatne"<<std::endl;
	 } else if (num < 0) {
		 std::cout<< "Chislo videmne"<<std::endl;
	 } else  {
		 std::cout<< "Chislo dorivnue nulu"<< std::endl;
	 }

	return 0; 
}

