#include <iostream>

class LetterPrinter { 
	public: 
		LetterPrinter() { 
			std::cout << "A"; 
		} 
		~LetterPrinter() {
			std::cout << "B"; 
		}
};

int main() {

	for (int i = 0; i < 1; i++) {
		LetterPrinter a;
		for (int j = 0; j < 1; j++) {
			LetterPrinter b;
		}
		LetterPrinter c;
		for (int k = 0; k < 1; k++) {
			LetterPrinter b;
		}
		for (int z = 0; z < 1; z++) {
			LetterPrinter b;
		}
	}	
}