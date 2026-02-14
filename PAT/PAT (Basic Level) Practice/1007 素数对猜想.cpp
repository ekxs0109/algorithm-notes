//
// Created by ekxs on 2026/2/14.
//


#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int sqrtN = static_cast<int>(sqrt(n));

    for (int i = 3; i <= sqrtN; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int a;
    cin >> a;

    int count = 0;
    vector<int> primes;

    for (int i = 0; i <= a; i++) {
        if (isPrime(i)) primes.push_back(i);
    }

    if (primes.size()<2) {
        cout << 0 << endl;
        return 0;
    }

    for (auto it = primes.begin(); next(it) != primes.end(); ++it) {
        if (*(next(it)) - *it == 2) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
