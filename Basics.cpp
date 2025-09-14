
#include <iostream>
using namespace std;

int main() {
    // Printing mine and mother's name
    cout <<"Hello" << ", " << "Adhyayan Das\n" << "Jamuna Das\n";
    // Devision
    int a;
    float b;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter another number: ";
    cin >> b;
    cout <<"Division of " << a << " by " << b << " will be: " << a/b << "\n";

    // NOT operator use case
    cout << !(2<3) << "\n";

    // Finding out sum of 2 numbers
    int c;
    int d;
    cout << "Enter a number: ";
    cin >> c;
    cout << "Enter another number: ";
    cin >> d;
    cout << "Sum of these 2 numbers will be :" << c+d << "\n";
    // Using Unary Operators
    cout << a++ << "\n";
    cout << b-- << "\n";
    cout << ++a << "\n";
    cout << --b << "\n";
    return 0;
}
