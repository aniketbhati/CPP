#include <iostream>
using namespace std;

int fib(int n, int arr[]) {
    if (arr[n] != 0) {
        return arr[n];
    }
    if (n == 1 || n == 2) {
        return 1;
    }
    arr[n] = fib(n - 1, arr) + fib(n - 2, arr);
    return arr[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n + 1] = {0}; // Initialize array with zeros
    cout << "Fibonacci number " << n << " is " << fib(n, arr) << endl;
    return 0;
}
