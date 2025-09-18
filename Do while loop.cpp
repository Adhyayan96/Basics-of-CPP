#include <bits/stdc++.h>
using namespace std;

int main() {

    /*in Do While loop : initialization; 
    do {
    cout <<...;
    } while(condition);
    - this way it works */ 

    int a;
    cin >> a;
    int i = 1;
    do {
        cout << "Adhyayan" << "\n";
        i++;
    } while(i<=a);
    // Print sum of n numbers using do while loop
    int b;
    cin >> b;
    int k =1;
    int sum = 0;
    do {
        sum +=k;
        k++;
    } while (k<=b);
    cout << sum << "\n";
return 0;
}