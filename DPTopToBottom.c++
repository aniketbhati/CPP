#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    int arr[n + 1];
    arr[1] = 1;
    arr[2] = 1;
    for (int i = 3; i <= n; ++i) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci number: " << fib(n) << endl;
    return 0;
}
