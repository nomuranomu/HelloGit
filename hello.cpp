#include <iostream>
#include <string>

int main(){
	std::string text1 = "Apple";
	std::string text2 = "Pen";
	std::string text3 = "Pineapple";
	
	std::string text4 = text2 + text3 + text1 + text2;
	
	std::cout << text4 << std::endl;
	std::cout << text4.length() << std::endl;
	
	return 0;
}

