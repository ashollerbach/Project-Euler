// Problem 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


static bool checkPrime(long num) {
    for (long i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    long largest_prime = 0;
    long long target = 48748765456;
    
    for (long i = 2; i < target / 2; i++) {
        if (target % i == 0) {
            if (checkPrime(i)) {
                largest_prime = i;
            }
        }
    }
    std::cout << largest_prime;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
