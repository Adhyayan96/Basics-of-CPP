#include<bits/stdc++.h>
using namespace std;

// parameterised
void printName(string name, string n){
    // or, void printName(string name) { - its parameterised, because mentioned which function it's calling - string name & n
    // cout << "Hey Adhyayan, " << name << endl;} - we can take any string variable name, but all strings will be printed (it's reusability of code)
    cout << "Hey " << name << ", " << n << endl;
}
int main() {
string name;
cin >> name;
string n;
cin >> n;
printName(name,n);
return 0;
}