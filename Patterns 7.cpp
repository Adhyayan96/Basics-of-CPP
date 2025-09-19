#include <iostream>
using namespace std;
/*
1
22
333
4444
*/

int main() {
    int n;
    cin >> n;
    int row = 1;
    while (row<=n) {
        int col = 1;
        while (col<=row) {
            cout << row;
            col++;
        }
        cout << "\n";
        row++;
    }
    return 0;
}