#include <iostream>
using namespace std;


int factorial(int n) {
    if (n < 1 ) {
        return 1;
    }
    if(n % 2!=0){
        return n*factorial(n-2);
    }
    else{
        return n * factorial(n - 1);
    }
    
}

int main() {
    int n=15;
    int b=factorial(n);
    cout << "Multiplication of odd numbers from 1 to 15: " <<b << endl;
    return 0;
}

