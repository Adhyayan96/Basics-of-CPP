#include <iostream>
using namespace std;
/*
D
CD
BCD
ABCD
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    while (col<=row) {
        char ans = 4 + col - row + 'A' - 1;
        cout << ans;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}