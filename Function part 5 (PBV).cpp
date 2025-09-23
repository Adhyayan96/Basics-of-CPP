#include<bits/stdc++.h>
using namespace std;

// Pass by Value

int Adhyayanfunction(int n) {
    cout << n << endl;
    n++;
    cout << n << endl;
    n++;
    cout << n << endl;
}

int main(){
    int n; 
    cin >> n;
    Adhyayanfunction(n);
    cout << n; // when you send inputs, like any number through function, the original values stay in main function but copied values of those goes to mentioned function.
    return 0;
}

/*
Another example ;

int Adhyayanfunction(string n) {
    s[0] = 'A';
    cout << n << endl;
}

int main(){
    string n; 
    cin >> n;
    Adhyayanfunction(n);
    cout << n;
    return 0;
}
*/