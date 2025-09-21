#include <iostream>
using namespace std;
/*
ABC
BCD
CDE
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    while (col<=n) {
        char ans = row + col - 1 + 'A' -1;
        cout << ans;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}