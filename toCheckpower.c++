#include <iostream>
using namespace std;
int multiplyodd(int n)
{
    if (n < 1)
    {
        return 1;
    }
    if (n % 2 != 0)
    {
         return n * multiplyodd(n - 2);
    }
    else
    {
        return n * multiplyodd(n - 1);
    }
}
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    return base * power(base, exponent - 1);
}  
int main()
{
    int n = 15;
    int res= multiplyodd(n);
    int pow = power(2,10);
    cout << "multiplication of odd number is " << res<<endl;
    cout<<"power is "<<pow;
    return 0;
}