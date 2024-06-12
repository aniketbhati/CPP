#include <iostream>
#include <cmath>
#define PI 3.14159265358979323846;
using namespace std;

double add(double a, double b){
    return a+b;

}
double subtract(double a, double b){
    return a-b;

}
double divide(double a, double b){
    return a/b;

}
double multiply(double a, double b){
    return a*b;

}
double sine(double angle){
    double radians = angle * PI / 180.0;
    return sin(radians);

}
double cosine(double angle){
    double radians = angle * PI / 180.0;
    return cos(radians);

}
double tangent(double angle){
    double radians = angle * PI / 180.0;
    return tan(radians);

}
double natural_log(double value){
    return log(value);

}
double log_base10(double value){
    return log10(value);
}
// double power(double base, double exponent){
//     return pow(base, exponent);
// }


double factorial(int n){
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);

}

int main() {

    int choice;
    double a, b;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers to add: ";
            cin >> a >> b;
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Enter two numbers to subtract: ";
            cin >> a >> b;
            cout << "Result: " << subtract(a, b)<<endl;
            break;
        case 3:
            cout << "Enter two numbers to multiply: ";
            cin >> a >> b;
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            cout << "Enter two numbers to divide: ";
            cin >> a >> b;
            cout << "Result: " << divide(a, b) << endl;
            break;
        case 5:
            cout << "Enter angle: ";
            cin >> angle;
            cout << "Result: " << sine(angle) << endl;
            break;
        case 6:
            cout << "Enter angle value ";
            cin >> angle;
            cout << "Result: " << cosine(angle) << std::endl;
            break;
        case 7:
            cout << "Enter  tangent: ";
            cin >> angle;
            cout << "Result: " << tangent(angle) << endl;
            break;
        // case 8:
        //     cout << "Enter a number to find natural log";
        //     cin >> value;
        //     cout << "Result: " << natural_log(value) << std::endl;
        //     break;
        // case 9:
        //     cout << "Enter a number to find log base: ";
        //     cin >> value;
        //     cout << "Result: " << log_base10(value) << std::endl;
        //     break;
        // case 10:
        //     cout << "Enter base and exponent to calculate power: ";
        //     cin >> base >> exponent;
        //     cout << "Result: " << power(base, exponent) << endl;
        //     break;
        // case 11:
        //     int factorialn;

        
    }

    cout<<"addition is "<<add<<endl;
    cout<<"Subtraction is "<<subtract<<endl;
    cout<<"Multiply is "<<multiply<<endl;
    cout<<"Divide is "<<divide<<endl;
    cout<<"Sine is "<<sine<<endl;
    cout<<"Cosine is "<<cosine<<endl;
   
   return 0;


}