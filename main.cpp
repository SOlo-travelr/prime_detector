#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}
// this is the main function that calls the isprime function

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number))
        cout << number << " is a prime number." << endl;
    else
        cout << number << " is not a prime number." << endl;

    // check the feasibility of the non-prime number
    // this is a comment
    if (!isPrime(number)) {
        cout << "The number is not prime, so it is feasible." << endl;
    } else {
        cout << "The number is prime, so it is not feasible." << endl;
    }
    return 0;
}