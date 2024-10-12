#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int primeCount = 0;
    int num = 2;
    int result;

    while (primeCount < 10001) {
        if (isPrime(num)) {
            primeCount++;
            result = num;
        }
        num++;
    }

    cout << "The 10001st prime number is: " << result << endl;
    return 0;
}
