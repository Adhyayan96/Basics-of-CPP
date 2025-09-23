#include<bits/stdc++.h>
using namespace std;

// Pass by reference - it is used to make change to the original input-s

int Adhyayanfunction(int &n, string a) { // the '&' sign represents that it's pass by value
    cout << n << endl;
    n++;
    cout << n << endl;
    n++;
    cout << n << endl;
    cout << a << endl;
}

int main(){
    int n; 
    string a;
    cin >> n >> a;
    Adhyayanfunction(n,a);
    cout << n << endl; // when you send inputs, like any number through function, the original values stay in main function but copied values of those goes to mentioned function.
    cout << a;
    return 0;
}