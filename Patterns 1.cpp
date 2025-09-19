#include <bits/stdc++.h>
using namespace std;
/*
***
***
***
*/

int main() {
int r;
cin >> r;
int i = 1;
while (i<=r) {
    int j = 1;
    while (j<=r) {
        cout << "*";
        j++;
    }
cout << "\n";
i++;
}
return 0;
}