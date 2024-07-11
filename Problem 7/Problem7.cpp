#include <iostream>

bool checkPrime(int num) {
	if (num % 2 == 0 || num % 3 == 0) {
		return false;
	} 
	for (int i = 5; i * i <= num; i++) {
		if (num % i == 0 || num % (i+2) == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int counter = 2;
	int nPrimes = 10001;

	for (int i = 5; counter <= nPrimes; i += 6) { // used to iterate through the possible primes until nPrimes are found

		if (checkPrime(i)) {
			counter++;
			if (counter == nPrimes) {
				std::cout << i;
			}
		}
		if (checkPrime(i + 2)) {
			counter++;
			if (counter == nPrimes) {
				std::cout << i + 2;
			}
		}
	}
}