#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a;
    cin >> b;
    cout << "What do you want to do - Sum (Press 1) / Subtraction (Press 2) / Division (Press 3) / Multiplication (Press 4) / Modulo (Press 5)" << "\n";
    int c;
    cin >> c;
    if (c == 1) {
        cout << a+b;
    } else if (c == 2) {
            cout << a-b;
        } else if (c == 3) {
            cout << a/b;
        } else if (c == 4) {
            cout << a*b;
        } else if (c == 5) {
            cout << a%b;
        } else {
            cout << "Please press a number between 1-5, based on your need";
        }
    return 0;
}