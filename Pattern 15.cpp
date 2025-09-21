#include <iostream>
using namespace std;
/*
A
BB
CCC
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    while (col<=row) {
        char ans = row + 'A' - 1;
        cout << ans;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}