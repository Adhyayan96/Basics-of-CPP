#include <bits/stdc++.h>
using namespace std;

int main() {
// Learning basic implementation of Strings
string s = "Adhyayan";
int len = s.size(); // this is for finding length of a string
s[len-1] = 'z'; // changed last character of my string
cout << s[3] << "\n";
cout << len << "\n";
cout << s[len-1] << "\n";
return 0;
}