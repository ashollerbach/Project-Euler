#include <iostream>

int main() {
	int n = 100;
	int sum = 0;
	int squares = 0;

	for (int i = 1; i <= n; i++) {
		sum += i * i;
		squares += i;
	}
	squares *= squares;
	std::cout << squares - sum;
}