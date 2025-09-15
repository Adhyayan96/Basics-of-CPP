#include <iostream>
using namespace std;

int main() {
    // Learning basic if else function
    int d,f;
    cin >> d;
    cin >> f;
    if (d>=f){
        cout << "d is greater than f" << "\n";
    }
    else {
        cout << "d is greater than f" << "\n";
    }
    // Solving a basic question about identifying character or number
    char c;
    cin >> c;
    if (c >= 'a' && c<='z') {
        cout << "it's a lower case" << "\n";
    }
        else if (c >= 'A' && c<='Z') {
            cout << "it's a upperr case" << "\n";
        }
        else if (c >= '0' && c<='9') {
            cout << "it's a number" << "\n";
        }
    // Learning while loop
    int g;
    cin >> g;
    int i = 1;
    while (i<=g) {
       cout << i << "\n";
       i++;
    }
    // Sum of 1 to N by using while  loop
    int h;
    cin >> h;
    int j = 1;
    int sum = 0;
    while (j<=h) {
        sum +=j;
        j++;
    }
    cout << sum << "\n";
    // Find sum of 1 to N, but sum of only even numbers
    int m;
    cin >> m;
    int n = 1;
    int sum2 = 0;
    while (n<=m) {
        if (n % 2 == 0) {
            sum2 +=n;
            n++;
        }
        else if (n % 2 != 0) {
            n++; 
        }
    }
    cout << sum2 << "\n";
    // Celcius to fahrenheit conversion
    int x;
    cin >> x;
    int z = 9*(x)/5 + 32;
    cout << z << "\n";
    // Prime number checking
    int y;
    cin >> y;
    int w = 2;
    while (w<y){
    if (y%w==0)
    {
     cout << "It's not prime for " << w << "\n";
    }
    else if (y%w!=0) {
    cout << "It's prime for " << w << "\n";
    } 
    w++;
    }
    return 0;
}