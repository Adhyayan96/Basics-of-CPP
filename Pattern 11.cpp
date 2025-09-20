#include <iostream>
using namespace std;
/*
AAA
BBB
CCC
*/

int main() {
int n;
cin >> n;
int row = 1;
while (row<=n) {
    int column = 1;
    while (column<=n) {
        if (row == 1) {
            cout << 'A';
        }
            else if (row == 2) {
                cout << 'B';
            }
                else {
                    cout << 'C';
                }
                column++;
    }
                cout << "\n";
                row++;
}
return 0;
}