#include <iostream>
using namespace std;
/*
A
BC
DEF
GHIJ
KLMNO
*/

int main() {
int n;
cin >> n;
int row = 1;
int count = 1;
while (row<=n) {
    int col = 1;
    while (col<=row) {
        char ans = count + 'A' - 1;
        cout << ans;
        count++;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}