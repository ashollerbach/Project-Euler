#include <iostream>

int main() {
	bool found = false;
	long smallestNum = 630;

	while (!found) {
		found = true;

			for (int i = 3; i < 20; i += 1) {
				if (smallestNum % i != 0) {
					found = false;
 					break;
				}
		}
		smallestNum += 2;
	}

	std::cout << smallestNum - 2;
}