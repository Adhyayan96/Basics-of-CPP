#include <iostream>
using namespace std;
/*
ABC
DEF
GHI
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int col = 1;
    while (col<=n) {
        char ch = row + col - 1 + 'A' - 1;
        cout << ch;
        col++;
    }
    cout << "\n";
    row++;
}
return 0;
}