#include <bits/stdc++.h>
using namespace std;
/*
111
222
333
*/

int main() {
int n;
cin >> n;
int i = 1;
while (i<=n) {
    int j = 1;
    while (j<=n) {
        cout << i;
        j++;
    }
    cout << "\n";
    i++;
}
return 0;
}