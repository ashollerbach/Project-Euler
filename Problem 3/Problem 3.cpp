// Problem 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>


static bool checkPrime(int num) {
	for (long long j = 5; j * j < num; j += 6) { // j is reading garbage
		if (num % j == 0 || num % (j+2) == 0) {
			return false;
		}
	}
	return true;
}

int main(){

	long long largestPrime{ 0 };
	long long number = 600851475143;

	//600851475143
	//13195

	for (long long i = 5; i * i < number; i += 6) {
			if (number % i == 0) {
				if (checkPrime(i)) {
					largestPrime = i;
					std::cout << i << std::endl;
				}
			}
			if (number % (i + 2) == 0) {
				if (checkPrime(i + 2)) {
					largestPrime = i + 2;
					std::cout << i + 2 << std::endl;
				}
			}
		}
}
